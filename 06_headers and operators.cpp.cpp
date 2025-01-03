#include <iostream>

using namespace std;

int main() {

//     cout<< "yo yo yo ";
int a = 4, b= 7 ;
cout << " operators in c++"<<endl;
cout << " follow are the types of operators in c++"<<endl;
//arithmetic operators
cout<< "the valur of a + b is "<< a+b<<endl;
cout<< "the valur of a - b is "<< a-b<<endl;
cout<< "the valur of a * b is "<< a*b<<endl;
cout<< "the valur of a % b is "<< a%b<<endl;
cout<< "the valur of a++ is "<< a++<<endl;
cout<< "the valur of a-- b is "<< a--<<endl;
cout<< "the valur of ++a b is "<< ++a<<endl;
cout<< "the valur of --a is "<< --a<<endl;
cout<<endl;


//comparison operators
cout<< "the value of a == b is "<< (a==b) << endl;
cout<< "the value of a != b is "<< (a!=b) << endl;
cout<< "the value of a >b is "<< (a>b) << endl;
cout<< "the value of a < b is "<< (a<b) << endl;
cout<< "the value of a <= b is "<< (a<=b) << endl;
cout<< "the value of a >= b is "<< (a>=b) << endl;
cout<<endl;

//logical operator
cout<<"the following are the logical operators in c++"<< endl;
cout <<"the value of logical and  operator is: ((a==b) && (a<b))  "<<((a==b) && (a<b))<<endl;
cout <<"the value of logical or  operator is: ((a==b) || (a<b))  "<<((a==b) || (a<b))<<endl;
cout <<"the value of logical not  operator is: (!(a==b) )  "<<(!(a==b))<<endl;


   return 0 ;
 }


