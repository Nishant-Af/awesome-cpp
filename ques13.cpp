#include <iostream>
using namespace std;

void ReverseSentence(string & str, int index = 0){
   int len = str.length();
   if(str[len] == '\0'){
        exit;
   }
   else{
        ReverseSentence(str, index + 1);
   }
   cout<<"Reverse String : "<<str<<endl;
    
}

int main(){
    string name;
    cout<<"Enter Your String : "<<endl;
    cin>>name;
    ReverseSentence(name);
    return 0;
}