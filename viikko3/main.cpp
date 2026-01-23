#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string.h>
using namespace std;

int main()
{
    
    string kokinNimi;
    cout << "Hello World!" << endl;
    Chef kokki_1("Larppa");
    ItalianChef it_kokki_1("Jonne");
//    Chef kokki_2("Josse");
    
    kokinNimi = kokki_1.getName();
    cout << "Main: kokinNimi " << kokinNimi << endl;
    kokki_1.makeSalad(50);
    kokki_1.makeSalad(18);
    kokki_1.makeSoup(9);
    
    it_kokki_1.askSecret("pizza", 20, 5);
    
    return 0;
}
