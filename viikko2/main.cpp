#include <iostream>
#include "newgame.h"


using namespace std;

int main()
{
    
    int maxNum(20);
    newGame peliOlio(maxNum);
    
    peliOlio.play();
    peliOlio.printGameResult();
    
    return 0;
}
