# UnityStyleUE_LOG
Unity Style UE_LOG

``` c++
#include "YourPath/Debug.h"
...
Debug_Log(TEXT("Name:%s"), TEXT("Bob"));
//Print: LogTemp: Name:Bob
//(D:/Project/Source/Private/ClassA.cpp Line:40 Func:ClassA::TickComponent)
Debug_Warning(TEXT("Name:%s"), TEXT("Bob"));
Debug_Error(TEXT("Name:%s"), TEXT("Bob"));

```

And Debug Bool:
``` c++
Debug_Log(TEXT("Bool Value:%s"), DebugBool(true));
```
