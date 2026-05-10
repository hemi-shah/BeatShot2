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
}

void ARhythmBeatManager::OnBeatFired()
{
    LastBeatTime = GetWorld()->GetTimeSeconds();
    OnBeat.Broadcast();
}

FString ARhythmBeatManager::CheckHitAccuracy(float HitTime)
{
    float Difference = FMath::Abs(HitTime - LastBeatTime);

    if (Difference < 0.05f)
        return "Perfect";
    else if (Difference < 0.1f)
        return "Good";
    else if (Difference < 0.15f)
        return "Bad";
    else
        return "Miss";
}