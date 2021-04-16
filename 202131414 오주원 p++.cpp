#include <iostream>

using namespace std;

class Point
{
private:
    double m_x;

public:
    Point(double x = 0.0)
        : m_x(x) {}

    // 전위 증가
    Point& operator++()
    {
        m_x += 1;


        return *this;
    }

    // 후위 증가
    Point operator++(int)
    {
        Point temp(m_x);

        m_x += 1;

        return temp;
    }

    // 출력 연산자 오버로딩
    friend ostream& operator << (ostream& out, const Point& point)
    {
        out << point.m_x << " ";
        return out;
    }
};




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
        cout << "간식은 새우깡\n";
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
    Point p1(1);

    Animal* pa = new Dog;
    Animal* pb = new Bird;
    Animal* pc = new Cat;





    cout << ++p1 << endl; // 바로 증가 2
    pa->Gosu();
    pa->Cry();

    cout << p1++ << endl; // 다음 행에서 증가 2   
    pb->Gosu();
    pb->Cry();

    cout << p1 << endl; //3
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