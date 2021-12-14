#ifndef LOCK_H
#define LOCK_H

#include <iostream>
#include <memory>
#include <mutex>

using namespace std;

class Lock 
{
    public:
        explicit Lock(Mutex *pm);
        void Unlock(Mutex *pm);

    private:
        shared_ptr<Mutex> mutexPtr;
};

#endif