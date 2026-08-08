#include <iostream>
#include <string.h>
using namespace std;

class greet
{
private:
    string greet = "Hello, World!";

public:
    void greeting(void);
};

void greet::greeting(void)
{
    cout << greet << endl;
}

int main()
{
    greet obj;
    obj.greeting();
    return 0;
}