#include<iostream>
using namespace std;

int main(){
   int age;
   cout<<"tell me your age"<<endl;
     cin>>age;
//     if((age<18) && (age>0)){
//         cout<<"you cant attend the party"<<endl;
//     }
//     else if (age==18){
//         cout<<"duhh you are kid but nvm you can attend the party"<<endl;
//     }
//     else if (age<1){
//         cout<<"you are not yet born bruh"<<endl;
//     }
//     else{
//         cout<<"you can come to the party"<<endl;
//     }

switch (age)
{
case 18:
cout<<"you are 18"<<endl;
     break;
    case 22:
cout<<"you are 22"<<endl;
    break;
    case 100:
cout<<"you are 100"<<endl;
    break;

default:
cout<<"no special case"<<endl;
    break;
}
    cout<<"done with switch case";
      return 0;
}