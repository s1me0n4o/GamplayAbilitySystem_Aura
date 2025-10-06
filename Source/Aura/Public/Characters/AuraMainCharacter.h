// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AuraCharacterBase.h"
#include "AuraMainCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraMainCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraMainCharacter();

private:
	UPROPERTY(EditAnywhere, Category = Camera)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere, Category = Camera)
	TObjectPtr<class UCameraComponent> FollowCamera;
};
