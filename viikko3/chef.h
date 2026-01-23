#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;


class Chef
{
public:
    Chef();
    Chef(string);
    int makeSoup(int);
    int makeSalad(int);
    string getName();
    void setName(string);
    ~Chef();
protected:
    string chefName;
    
};

#endif // CHEF_H
