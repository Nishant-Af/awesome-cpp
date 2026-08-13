#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    cout<<"Files in Present Directory: "<<endl;
    cout<<system("dir");
    return 0;
}