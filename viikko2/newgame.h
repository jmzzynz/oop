#ifndef NEWGAME_H
#define NEWGAME_H

class newGame
{
public:
    newGame(int);
    ~newGame();
    void play();
    void printGameResult();
private:
    int maxNumber = 0;
    int playerGuess;
    int randomNumber = 0;
    int numOfGuess = 0;
    
    
protected:
    
};

#endif // NEWGAME_H
