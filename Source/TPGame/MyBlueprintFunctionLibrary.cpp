// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

 bool UMyBlueprintFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
 {
     return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
 }