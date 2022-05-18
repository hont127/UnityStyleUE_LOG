#pragma once

#define Debug_Log(format, ...) Debug_Internal(Log, format,##__VA_ARGS__)
#define Debug_Warning(format, ...) Debug_Internal(Warning, format,##__VA_ARGS__)
#define Debug_Error(format, ...) Debug_Internal(Error, format,##__VA_ARGS__)

#define Debug_Internal(logType, format, ...) UE_LOG(LogTemp, ##logType, TEXT("%s \n (%s Line:%d Func:%s)"), *Debug_Internal_(format,##__VA_ARGS__), TEXT(__FILE__), __LINE__, TEXT(__FUNCTION__))
#define Debug_Internal_(format, ...) FString::Printf(format,##__VA_ARGS__)

#define DebugBool(value) value ? TEXT("True") : TEXT("False")