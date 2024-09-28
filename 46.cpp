#include<iostream>
using namespace std;


class animal{
public:

    void eat()
    {
        cout << "this animal is eating" << endl;
    }
};

class dog : public animal{
public:

    void bark()
    {
        cout << "this animal is barking" << endl;
    }
};

int main(int argc, char const *argv[])
{
    dog my_dog;

    my_dog.eat();    
    my_dog.bark();


    return 0;
}




