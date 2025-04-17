# please see inside `ModuleMapTest/Modules` for full code with comments!

## c++
```cpp
#include "Random.hpp"
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    srand(time(0));
    
    int randomNum = rand() % 101;
    return randomNum;
}
```

## header
```cpp
#ifndef Random_hpp
#define Random_hpp

#include <cstdio>
#include <cstdlib>
#include <ctime>

int getRandomNumber();

#endif
```

## modulemap
```cpp
module RandomModule {
    header "Random.hpp"
    export *
}

```

## swift
```swift
import RandomModule

let randomNumber = getRandomNumber()
print(randomNumber)

```
