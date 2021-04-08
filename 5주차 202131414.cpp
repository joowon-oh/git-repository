#include <iostream>

using namespace std;

class Animal {

public:
    virtual void Cry() = 0;
    virtual void Gosu() = 0;

};

class Dog : public Animal {

public:
    void Gosu() {
        cout << "다리는 4개\n";
        cout << "간식은 개껌\n";
        return;
    }
    void Cry() {
        cout << "멍멍\n" << endl; return;
    }

};

class Bird : public Animal {

public:
    void Gosu() {
        cout << "다리는 2개\n";
        cout << "간식은 씨앗\n";
        return;
    }
    void Cry() {
        cout << "짹짹\n" << endl; return;
    };

};

class Cat : public Animal {

public:
    void Gosu() {
        cout << "다리는 4개\n";
        cout << "간식은 츄르\n";
        return;
    }
    void Cry() {
        cout << "냐용\n" << endl; return;
    };

};

int main()
{
    Animal* pa = new Dog;
    Animal* pb = new Bird;
    Animal* pc = new Cat;
    pa->Gosu();
    pa->Cry();
    pb->Gosu();
    pb->Cry();
    pc->Gosu();
    pc->Cry();

    Dog* pd = (Dog*)pa;
    pd->Cry();

    Bird* pe = (Bird*)pb;
    pb->Cry();

    Cat* pf = (Cat*)pc;
    pc->Cry();
    return 0;
}