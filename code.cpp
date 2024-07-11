#include <iostream>
#include <string>

using namespace std;

int main() 
{
     string text;
     cout<<"Enter your string: ";
     getline(cin,text);
     int characters=0,letters=0,digits=0;
     for(char c : text){
       if(!isspace(c)){
         characters++;
         if(isalpha(c))letters++;
         if(isdigit(c))digits++;
       }
     }
     cout<<endl<<"Total characters: "<<characters<<endl;
    cout<<"Total letters: "<<letters<<endl;
    cout<<"Total digits: "<<digits<<endl;

    return 0;
}
