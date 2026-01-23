#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
using namespace std;
class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    bool askSecret(string, int, int);
    ~ItalianChef();
    
private:
    int flour;
    int water;
    int makePizza();
    string password = "pizza";
};

#endif // ITALIANCHEF_H
