// Fill out your copyright notice in the Description page of Project Settings.

#include "ModioBlueprintFunctionLibrary.h"

void UModioBlueprintFunctionLibrary::modioGetMods()
{
	modio::FilterCreator filter;
	filter.setLimit(3);
	filter.setCacheMaxAgeSeconds(10);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Getting mods..."));

	modio_instance->getMods(filter, [&](const modio::Response &response, const std::vector<modio::Mod> &mods) {
		const int32 response_code = response.code;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Responsee: %02d"), response_code));
		if (response.code == 200)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Listing mods"));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("============"));

			for (int i = 0; i<mods.size(); i++)
			{
				const modio::Mod mod = mods[i];

				const int32 mod_id = mods[i].id;
				FString mod_name(mods[i].name.c_str());

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("id: %02d"), mod_id));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("name: %s"), *mod_name));
			}
		}
	});
}

void UModioBlueprintFunctionLibrary::modioTick()
{
	modio_instance->process();
}


