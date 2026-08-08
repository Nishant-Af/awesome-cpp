#include <iostream>
using namespace std;

class sizeOfDataTypes
{
    public:
        void printSizeOfDataTypes(void){
           cout<<"size of int: "<<sizeof(int)<<" bytes"<<endl;
           cout<<"size of float: "<<sizeof(float)<<" bytes"<<endl;
           cout<<"size of char: "<< sizeof(char)<<" bytes"<<endl;
           cout<<"size of double: "<<sizeof(double)<<" bytes"<<endl;

        }
};

int main(){
   
    sizeOfDataTypes obj1;
    obj1.printSizeOfDataTypes();
    
    return 0;
}