# UnityStyleUE_LOG
Unity Style UE_LOG

``` c++
#include "YourPath/Debug.h"
...
Debug_Log_Format("Name:%s", TEXT("Bob"));
//Print: LogTemp: Name:Bob
//(D:/Project/Source/Private/ClassA.cpp Line:40 Func:ClassA::TickComponent)
Debug_Warning_Format("Name:%s", TEXT("Bob"));
Debug_Error_Format("Name:%s", TEXT("Bob"));

```

And Debug Bool:
``` c++
Debug_Log_Format("Bool Value:%s", DebugBool(true));
```
