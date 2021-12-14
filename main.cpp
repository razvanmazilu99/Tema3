#include "src/Toy/src/Toy.hpp"
#include "src/Child/src/Child.hpp"

#include <iostream>
#include <memory>
#include <thread>
using namespace std;

void use_unique_pointer() 
{
    Child child("Andrei", "Draghici", 5, "boy");
    Toy *toy = new Toy("Barbie doll", "BarbieEnterprise", 100);
    child.play(toy);

    cout << endl;

    Child child1("Johnny", "Bravo", 5, "boy");
    Toy *toy1 = new Toy("Barbie doll", "BarbieEnterprise", 100);
    child.playAndGiveAway(toy1, &child1);
}

void use_shared_pointer() 
{
    shared_ptr<Toy> game = make_shared<Toy>("Activity", "Piatnik", 120);
    {
        shared_ptr<Toy> game1 = make_shared<Toy>();
        game1 = game;

        shared_ptr<Toy> game2(game);

        cout << game.use_count() << " people are playing " << game1.get() -> getName() << endl;
    }
}

void use_mutex()
{
    thread t1(readTurn);
    thread t11(printTurn);
    thread t2(readTurn);
    thread t22(printTurn);
    thread t3(readTurn);
    thread t33(printTurn);
    thread t4(readTurn);
    thread t44(printTurn);

    t1.join();
    t11.join();
    t2.join();
    t22.join();
    t3.join();
    t33.join();
    t4.join();
    t44.join();
}

int main()
{
    use_unique_pointer();
    cout << endl;
    use_shared_pointer();
    cout << endl;
    use_mutex();
    return 0;
}