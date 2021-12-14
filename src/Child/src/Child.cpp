#include "Child.hpp"
#include "../../Human/src/Human.hpp"
#include "../../Toy/src/Toy.hpp"
#include <memory>

Child::Child() : Human(), gender("None"), toys({}) { cout << "Child default constructor called!" << endl; };

Child::Child(string firstName, string lastName, int age, string gender) : Human(firstName, lastName, age) 
{ 
    cout << "Child constructor called!" << endl;
    this -> gender = gender;
}

Child::Child(const Child& child) : Human(child)
{
    cout << "Child copy-constructor called!" << endl;
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
    cout << "Child destructor called!" << endl;
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

string Child::getName() 
{
    string name = firstName + " " + lastName;
    return name;
}

void Child::play(Toy *t) 
{
    unique_ptr<Toy> toy(t);
    cout << this -> firstName << " plays with " << toy -> getName() << endl;
}

//se face cu *child ca sa nu se apeleze child copy-construcorul
void Child::playAndGiveAway(Toy *t, Child *child) 
{
    unique_ptr<Toy> toy(t);
    cout << this -> firstName << " plays with " << toy -> getName() << endl;

    //toy1 = toy is wrong
    unique_ptr<Toy> toy1 = move(toy);
    cout << this -> firstName << " gave his toy to " << child -> getName() << endl;
    //cout << "The pointer to the old adress is now " << toy.get() << endl;
    cout << child -> getName() << " plays now with " << toy1.get() -> getName() << endl;
}