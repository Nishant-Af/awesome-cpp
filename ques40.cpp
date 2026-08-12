#include <iostream>
using namespace std;

class interfaceClass
{
protected:
    int a;
};

class D : public interfaceClass
{
protected:
    int a;

};

class X : public interfaceClass
{
protected:
    int a;
};

int main()
{

    return 0;
}