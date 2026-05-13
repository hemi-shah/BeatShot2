// Fill out your copyright notice in the Description page of Project Settings.

#include "RhythmBeatManager.h"

ARhythmBeatManager::ARhythmBeatManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARhythmBeatManager::BeginPlay()
{
    Super::BeginPlay();
}

void ARhythmBeatManager::StartBeat()
{
    float BeatInterval = 60.0f / CurrentSong.BPM;
    LastBeatTime = GetWorld()->GetTimeSeconds();
    
    GetWorld()->GetTimerManager().SetTimer(
        BeatTimerHandle,
        this,
        &ARhythmBeatManager::OnBeatFired,
        BeatInterval,
        true
    );

    if (CurrentSong.SongAudio)
    {
        MusicAudioComponent = UGameplayStatics::SpawnSound2D(GetWorld(), CurrentSong.SongAudio);
    }
}

void ARhythmBeatManager::OnBeatFired()
{
    LastBeatTime = GetWorld()->GetTimeSeconds();
    OnBeat.Broadcast();
}

FString ARhythmBeatManager::CheckHitAccuracy(float DistanceFromVeil)
{
    float AbsDistance = FMath::Abs(DistanceFromVeil);
    
    if (AbsDistance < 50.0f)
        return "Perfect";
    else if (AbsDistance < 150.0f)
        return "Great";
    else if (AbsDistance < 300.0f)
        return "Good";
    else
        return "Bad";
}

void ARhythmBeatManager::PauseBeat()
{
    GetWorld()->GetTimerManager().PauseTimer(BeatTimerHandle);
    
    if (MusicAudioComponent)
    {
        MusicAudioComponent->SetPaused(true);
    }
}

void ARhythmBeatManager::ResumeBeat()
{
    GetWorld()->GetTimerManager().UnPauseTimer(BeatTimerHandle);

    if (MusicAudioComponent)
    {
        MusicAudioComponent->SetPaused(false);
    }
}

void ARhythmBeatManager::StopBeat()
{
    GetWorld()->GetTimerManager().ClearTimer(BeatTimerHandle);
    
    if (MusicAudioComponent)
    {
        MusicAudioComponent->Stop();
    }
}