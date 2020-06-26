// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "PakFileEntry.h"

class IPakAnalyzer
{
public:
	IPakAnalyzer() {}
	virtual ~IPakAnalyzer() {}

	virtual bool LoadPakFile(const FString& InPakPath) = 0;
	virtual int32 GetFileCount() const = 0;
	virtual const TArray<FPakFileEntryPtr>& GetFiles() const = 0;
	virtual FString GetLastLoadGuid() const = 0;
	virtual bool IsLoadDirty(const FString& InGuid) const = 0;
};