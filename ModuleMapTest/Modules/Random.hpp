/*
 if running in c++/obj-c interoperability mode:
 */

#ifndef Random_hpp
#define Random_hpp

#include <cstdio>
#include <cstdlib>
#include <ctime>

int getRandomNumber(); /* returns a random number in range 0-100 */

#endif


/*
 
if running in c/obj-c interoperability mode:
 
#ifndef Random_hpp
#define Random_hpp

ensures symbol names are interpreted as c++.
when compiling as c++, include c++ versions of c headers.
 
#ifdef __cplusplus
#include <cstdio>
#include <cstdlib>
#include <ctime>

prevents c++ function name from being mangled when compiled.
ensures prototype refers to the C symbol name.

extern "C" {
#endif
    int getRandomNumber(); returns a random number in range 0-100
#ifdef __cplusplus
}
#endif
#endif
 
*/
