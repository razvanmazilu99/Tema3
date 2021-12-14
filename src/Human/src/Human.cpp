#include "Human.hpp"

Human::Human() : firstName("None"), lastName("None"), age(0) { cout << "Human default constructor called!" << endl; };

Human::Human(string firstName, string lastName, int age) 
{
    cout << "Human constructor called!" << endl;
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> age = age;
}

Human::Human(const Human& human)
{
    cout << "Human copy-constructor called!" << endl;
    this -> firstName = human.firstName;
    this -> lastName = human.lastName;
    this -> age = human.age;
};

Human::~Human() { cout << "Human destructor called!" << endl; };

string Human::printHuman() {
    return firstName + " " + lastName + ": " + std::to_string(age) + " ani";
}