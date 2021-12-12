#include "Human.hpp"

Human::Human() : firstName("None"), lastName("None"), age(0) {};

Human::Human(string firstName, string lastName, int age) 
{
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> age = age;
}

Human::Human(const Human& human)
{
    this -> firstName = human.firstName;
    this -> lastName = human.lastName;
    this -> age = human.age;
};

Human::~Human() {};