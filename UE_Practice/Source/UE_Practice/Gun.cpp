// Gun.cpp
#include "Gun.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

AGun::AGun()
{
	PrimaryActorTick.bCanEverTick = true;
	FireRate = 0.1f;
	MagazineCapacity = 30;
}

void AGun::Shoot()
{
	float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - LastFireTime >= FireRate)
	{
		if (MagazineCapacity > 0)
		{
			// Line trace 
			FVector StartTrace = GetActorLocation();
			FVector ForwardVector = GetActorForwardVector();
			FVector EndTrace = ((ForwardVector * 10000.f) + StartTrace);

			FHitResult HitResult;
			FCollisionQueryParams CollisionParams;
			CollisionParams.AddIgnoredActor(this); 

			if (GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Visibility, CollisionParams))
			{
				AActor* HitActor = HitResult.GetActor();
				
				UGameplayStatics::ApplyDamage(HitActor, Damage, nullptr, this, nullptr);
			}
			
			MagazineCapacity--;
			
			LastFireTime = CurrentTime;
		}
		else
		{
			
		}
	}
}
