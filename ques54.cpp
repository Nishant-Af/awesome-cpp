#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        double randNumber = (double)rand();
        cout<<fixed<<setprecision(5)<<randNumber<<endl;
    }
    
    return 0;
}