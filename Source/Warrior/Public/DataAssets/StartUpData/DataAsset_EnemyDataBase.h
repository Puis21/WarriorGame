// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
#include "DataAsset_EnemyDataBase.generated.h"

class UWarriorEnemyGameplayAbility;

////////////////////////////////////
// ///// !!!!!!!!!!!!!!!!!!!!
//////// THIS IS ACTUALLY UDataAsset_EnemyStartUpData
// //// TYPO
/////// !!!!!!!!!!!!!!!!!!
////////////////////////////////////

/**
 * 
 */
UCLASS()
class WARRIOR_API UDataAsset_EnemyDataBase : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()
	
public:

	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;
private:

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UWarriorEnemyGameplayAbility > > EnemyCombatAbilities;

};
