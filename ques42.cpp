#include <iostream>
using namespace std;

int main(){
    FILE *file1;
    FILE *file2;
    string buffer;
    file1 = fopen("file.txt","r");
    fscanf(file1, "%s", buffer);
    fclose(file1);

    file2 = fopen("file1.txt","w");
    fprintf(file2, buffer.c_str());
    fclose(file2);

    return 0;
}