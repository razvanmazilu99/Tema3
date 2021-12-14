#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human
{
    protected:
        string firstName;
        string lastName;
        int age;

    public:
        Human();
        Human(string firstName, string lastName, int age);
        Human(const Human& Human);
        ~Human();
        string printHuman();
};

#endif