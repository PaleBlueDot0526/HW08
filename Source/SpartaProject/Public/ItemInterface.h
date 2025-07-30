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
		UPrimitiveComponent* OverlappedComp, //�ݸ��� ������Ʈ �ڱ� �ڽ� -> SphereComponent
		AActor* OtherActor,	// �ε����� ��� ���� -> ĳ����
		UPrimitiveComponent* OherComp, // �ε����� ��� ������ �浹 ������Ʈ -> CapsuleComponent
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
