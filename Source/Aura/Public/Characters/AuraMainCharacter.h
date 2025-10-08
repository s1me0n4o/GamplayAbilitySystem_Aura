// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AuraCharacterBase.h"
#include "AuraMainCharacter.generated.h"

class AAuraPlayerState;
/**
 * 
 */
UCLASS()
class AURA_API AAuraMainCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraMainCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
protected:

private:
	UPROPERTY(EditAnywhere, Category = Camera)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere, Category = Camera)
	TObjectPtr<class UCameraComponent> FollowCamera;

private:
	void InitAbilityActorInfo();
};
