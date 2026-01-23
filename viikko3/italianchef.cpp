#include "italianchef.h"
#include <iostream>
#include <string>
using namespace std;

ItalianChef::ItalianChef()
{
    cout << "OLEN ITALIAINEN SI MI AMORE, PREGO PREGO" << endl;
}

ItalianChef::ItalianChef(string cN)
{
    cout << "Olen ITALIA konstruktorissa" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    cout << "Olen ITALIA destruktorissa!" << endl;
}

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    
    if(pw.compare(password)==1) return false;
    water = amountOfWater;
    flour = amountOfFlour;
    
    int numberOfPizzas = makePizza();
    cout << "Saatiin tehtyä: " << numberOfPizzas << endl;
    return true;
}

int ItalianChef::makePizza()
{
    
    cout << "Tehdään pizzaa! " << "Italialaisella Jonnella on " << "Jauhoja on: " << flour << " ja " << "Vettö on: " << water << endl;
    
    while(water/5 > flour/5){
        water--;
    };
    while(water/5 < flour/5){
        flour--;
    };
    
    int pizzalasku = (water/5 + flour/5)/2;
    
    cout << "Pizzoja voi tehdä: " << pizzalasku << endl;
    
    
    
    return pizzalasku;
}
