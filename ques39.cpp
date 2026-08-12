#include <iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void set_complex(int, int);
        void complex_Add(Complex o1, Complex o2);
        void print_complex();

};

void Complex :: set_complex(int x, int y){
    a = x;
    b = y;
}

void Complex:: print_complex(){
    cout<<a<<" + "<<b<<"i"<<endl;
}

void Complex ::complex_Add(Complex o1, Complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}


int main(){
    Complex c1, c2, c3;
    c1.set_complex(3,4);
    c1.print_complex();
    c2.set_complex(7,6);
    c2.print_complex();
    c3.complex_Add(c1, c2);
    c3.print_complex();
    return 0;
}