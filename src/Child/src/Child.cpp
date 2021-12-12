#include "Child.hpp"
#include "../../Human/src/Human.hpp"

Child::Child() : Human(), gender("None"), toys({}) {};

Child::Child(string firstName, string lastName, int age, string gender) : Human(firstName, lastName, age) 
{ 
    this -> gender = gender;
}

Child::Child(const Child& child) : Human(child)
{
    this -> gender = child.gender;
    this -> toys = child.toys;
}

Child& Child::operator=(const Child& child)
{
    //check for self-assign
    if(this == &child) {
        cout << "Self-assign case is treated!" << endl;
        return *this;
    }

    this -> firstName = child.firstName;
    this -> lastName = child.lastName;
    this -> age = child.age;
    this -> gender = child.gender;
    this -> toys = child.toys;

    return *this;
}

Child::~Child() 
{
    toys.clear();
}

void Child::addToy(Toy& toy)
{
    toys.push_back(toy);
}

void Child::printChild()
{
    cout << firstName << " " << lastName << " who is a " << age << " years old " << gender << " has" << ":" << endl;
    
    for(Toy t : toys) {
        cout << "  • " << t.getName() << " from " << t.getManufacturer() << " costs " << t.getPrice() << " lei" << endl;
    }

    cout << endl;
}