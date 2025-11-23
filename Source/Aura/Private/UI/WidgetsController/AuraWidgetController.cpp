// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/WidgetsController/AuraWidgetController.h"

void UAuraWidgetController::InitWidgetControllerParams(const FWidgetControllerParams& WidgetControllerParams)
{
	PlayerController = WidgetControllerParams.PlayerController;
	PlayerState = WidgetControllerParams.PlayerState;
	AbilitySystemComponent = WidgetControllerParams.AbilitySystemComponent;
	AttributeSet = WidgetControllerParams.AttributeSet;
}
