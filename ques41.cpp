#include <iostream>
using namespace std;

int main(){
    FILE *ptr;
    ptr = fopen("file.txt", "w");
    fprintf(ptr, "File Created Sucessfully");
    if (ptr == NULL)
    {
        cout<<"ERROR: File Can't Create Sucessfully"<<endl;
    }
    else{
        cout<<"FILE CREATED SUCESSFULLY"<<endl;
    }
    
    fclose(ptr);
    return 0;
}