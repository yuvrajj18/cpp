#include<iostream>
using namespace std;
int main(){
 // ??what is pointers? --->  data types which holds the address of other data types
int a = 3;
int * b = &a;
cout<<b;
// & --> (address of)operator 
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<b<<endl;
cout<<endl; 
// *(value at) dereference operator

cout<<"the value at address b is: "<<*b<<endl;

// pointer to ponter
int ** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout <<"the address of b is"<<c<<endl;

cout <<"the value at address value_at(valur_at(c)) is: "<<**c<<endl;
return(0);
}