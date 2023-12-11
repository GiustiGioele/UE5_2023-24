// Gun.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class YOURPROJECT_API AGun : public AActor
{
	GENERATED_BODY()

public:
	AGun();

	UFUNCTION(BlueprintCallable, Category = "Gun")
	void Shoot();
	void AttachComponent(USkeletalMeshComponent* GetMesh, const FAttachmentTransformRules& AttachmentTransformRules, const char* Str);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Gun")
	float FireRate;

	UPROPERTY(EditDefaultsOnly, Category = "Gun")
	int32 MagazineCapacity;
	float Damage;

	private:
	float LastFireTime;
};
