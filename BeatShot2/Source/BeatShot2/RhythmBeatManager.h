// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundBase.h"
#include "RhythmBeatManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeat);

USTRUCT(BlueprintType)
struct FSongData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString SongName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BPM = 191.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USoundBase* SongAudio = nullptr;
};

UCLASS()
class BEATSHOT2_API ARhythmBeatManager : public AActor
{
    GENERATED_BODY()

public:
    ARhythmBeatManager();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rhythm")
    FSongData CurrentSong;

    UPROPERTY(BlueprintAssignable, Category = "Rhythm")
    FOnBeat OnBeat;

    UFUNCTION(BlueprintCallable, Category = "Rhythm")
    void StartBeat();

    UFUNCTION(BlueprintCallable, Category = "Rhythm")
    FString CheckHitAccuracy(float HitTime);

protected:
    virtual void BeginPlay() override;

private:
    FTimerHandle BeatTimerHandle;
    float LastBeatTime = 0.0f;

    void OnBeatFired();
};