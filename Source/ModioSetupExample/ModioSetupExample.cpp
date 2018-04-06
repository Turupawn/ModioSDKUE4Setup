// Fill out your copyright notice in the Description page of Project Settings.

#include "ModioSetupExample.h"
#include "modio.h"
#include "Modules/ModuleManager.h"

modio::Instance *modio_instance;

class MyCustomGameModule : public FDefaultGameModuleImpl
{
	/**
	* Called right after the module DLL has been loaded and the module object has been created
	*/
	virtual void StartupModule() override
	{
		modio_instance = new modio::Instance(MODIO_ENVIRONMENT_TEST, 7, "e91c01b8882f4affeddd56c96111977b");
	}

	/**
	* Called before the module is unloaded, right before the module object is destroyed.
	*/
	virtual void ShutdownModule()
	{
		delete modio_instance;
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(MyCustomGameModule, ModioSetupExample, "ModioSetupExample");