// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/SlashHUD.h"

#include "Blueprint/UserWidget.h"
#include "HUD/SlashOverlayWidget.h"

void ASlashHUD::BeginPlay()
{
	Super::BeginPlay();
	

	if(const UWorld* World = GetWorld())
	{
		if(APlayerController* Controller = World->GetFirstPlayerController())
		{
			if(SlashOverlayClass)
			{
				SlashOverlayWidget = CreateWidget<USlashOverlayWidget>(Controller, SlashOverlayClass);
				SlashOverlayWidget->AddToViewport();
			}
		}
	}
	
}
