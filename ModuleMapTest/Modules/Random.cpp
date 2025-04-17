#include "Random.hpp"
#include <cstdlib>
#include <ctime>

int getRandomNumber() {
    srand(time(0)); /* ensures random-ness each time the program runs */
    
    int randomNum = rand() % 101; /* 0-100 */
    return randomNum;
}
