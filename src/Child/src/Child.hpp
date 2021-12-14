#ifndef CHILD_H
#define CHILD_H

#include "../../Toy/src/Toy.hpp"
#include "../../Human/src/Human.hpp"
#include "../../Lock/src/Lock.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Child : public Human
{
    private:
        string gender;
        vector<Toy> toys;

    public:
        Child();
        Child(string firstName, string lastName, int age, string gender);
        Child(const Child& child);
        Child& operator=(const Child& child);
        ~Child();
        void addToy(Toy& toy);
        void printChild();
        void play(Toy *t);
        void playAndGiveAway(Toy *t, Child *child);
        string getName();
};

#endif