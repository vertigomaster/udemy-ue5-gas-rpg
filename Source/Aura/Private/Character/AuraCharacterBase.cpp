// Copyright Julian Noel


#include "Character/AuraCharacterBase.h"

//Constructor runs on creation of the type, and defines the default state inherited;
//even in blueprintss
AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	//blueprints inheriting this type will start with a skeletal mesh component
	//with no collision which is attached to the given socket.
	
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}
