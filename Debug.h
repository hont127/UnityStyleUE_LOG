#pragma once

#define Debug_Log_FVector(fvector) Debug_Internal(Log, TEXT("%s: %s"),TEXT(#fvector), *fvector.ToString())
#define Debug_Warning_FVector(fvector) Debug_Internal(Warning, TEXT("%s: %s"),TEXT(#fvector), *fvector.ToString())
#define Debug_Error_FVector(fvector) Debug_Internal(Error, TEXT("%s: %s"),TEXT(#fvector), *fvector.ToString())

#define Debug_Log_Format(format, ...) Debug_Internal(Log, TEXT(format),##__VA_ARGS__)
#define Debug_Warning_Format(format, ...) Debug_Internal(Warning, TEXT(format),##__VA_ARGS__)
#define Debug_Error_Format(format, ...) Debug_Internal(Error, TEXT(format),##__VA_ARGS__)

#define Debug_Log(content) Debug_Internal(Log, TEXT("%s"),content)
#define Debug_Warning(content) Debug_Internal(Warning, TEXT("%s"),content)
#define Debug_Error(content) Debug_Internal(Error, TEXT("%s"),content)

#define Debug_Internal(logType, format, ...) UE_LOG(LogTemp, ##logType, TEXT("%s \n (%s Line:%d Func:%s)"), *Debug_Internal_(format,##__VA_ARGS__), TEXT(__FILE__), __LINE__, TEXT(__FUNCTION__))
#define Debug_Internal_(format, ...) FString::Printf(format,##__VA_ARGS__)

#define DebugBool(value) value ? TEXT("True") : TEXT("False")
