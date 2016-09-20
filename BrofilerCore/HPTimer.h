#pragma once
#include "Common.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Brofiler
{
	extern "C" int64 GetTime();

	int64 GetFrequency();
	int64 GetTimeMilliSeconds();
	int64 GetTimeMicroSeconds();

	void SpinSleep(uint32 microSeconds);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
