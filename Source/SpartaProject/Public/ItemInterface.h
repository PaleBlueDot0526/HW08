#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};


class SPARTAPROJECT_API IItemInterface
{
	GENERATED_BODY()

	
public:
	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlappedComp, //콜리젼 컴포넌트 자기 자신 -> SphereComponent
		AActor* OtherActor,	// 부딪히는 상대 엑터 -> 캐릭터
		UPrimitiveComponent* OherComp, // 부딪히는 상대 엑터의 충돌 컴포넌트 -> CapsuleComponent
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) = 0;

	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OherComp,
		int32 OtherBodyIndex) = 0;

	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0;

};
