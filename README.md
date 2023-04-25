# cpp-passgen
### The simpliest Password Generator using C++

## Functions
For now, the header contains only one method which is `generatePassword(int charCount)` where `charCount` is the length of generated password

## Usage
1. Include **passgen.hpp** in your project
```cpp
#include "passgen.hpp"
```
2. Use it for example in console output
```cpp
std::cout << generatePassword(10) << std::endl;
```
