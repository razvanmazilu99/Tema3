#include "Lock.hpp"

mutex pm;

Lock::Lock()
{
    pm.lock();
    cout << "Constructor lock" << endl;
}

Lock::~Lock()
{
    pm.unlock();
    cout << "Destructor unlock" << endl;
}

int counter;
string s;

void readTurn()
{
    Lock l;
    counter++;
    cout << "Choose player " << counter << ": "; cin >> s;
}

void printTurn()
{
    Lock l;
    cout << s << endl;
}