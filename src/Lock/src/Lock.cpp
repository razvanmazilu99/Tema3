#include "Lock.hpp"

Lock::Lock(Mutex *pm)
{
    pm -> lock();
    this -> mutexPtr.reset(pm, unlock);

    cout << "Lock" << endl;
}

void Lock::Unlock(Mutex *pm)
{
    pm -> unlock();

    cout << "Unlock" << endl;
}