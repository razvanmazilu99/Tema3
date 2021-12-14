#ifndef LOCK_H
#define LOCK_H

#include <iostream>
#include <memory>
#include <mutex>
#include <string>

using namespace std;

class Lock 
{
    public:
        explicit Lock();
        Lock(const Lock&) = delete;
        Lock& operator=(const Lock&) = delete;
        ~Lock();
};

void readTurn();
void printTurn();

#endif