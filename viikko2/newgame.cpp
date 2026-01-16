#include "newgame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


newGame::newGame(int mN)
{
   cout << "Peli alkaa hihihi" << endl;
    maxNumber = mN;
}
newGame::~newGame()
{   
   cout << "Peli tuhottu" << endl;
}

void newGame::play()
{
    
    srand(std::time(0));
    randomNumber = (rand() % maxNumber + 1);
    
    
    while (playerGuess != randomNumber)
    {
        
        cout << "Anna arvaus: " << endl;
        cin >> playerGuess;
        
        numOfGuess++;
        
        if (playerGuess == randomNumber)
        {
            cout << "Arvasit oikein, peli loppuu." << endl;
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Isompi numero" << endl;
        }
        else if (playerGuess > randomNumber)
        {
            cout << "Pienempi numero" << endl;
        }
    }
    
    
}

void newGame::printGameResult()
{
    
    cout << "Oikealuku:" << randomNumber << endl << "Arvausten määrä:" << numOfGuess << endl;
    
}
