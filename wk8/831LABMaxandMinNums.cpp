#include <iostream>
using namespace std;

/* Define your functions here */ 
int MaxNumber(int num1, int num2, int num3, int num4){
int max=num1;
    if(num2>max){max=num2;}
    if(num3>max){max=num3;}
    if(num4>max){max=num4;}
return max;
}
int MinNumber(int num1, int num2, int num3, int num4){
int min=num1;
    if(num2<min){min=num2;}
    if(num3<min){min=num3;}
    if(num4<min){min=num4;}
return min;
}

int main() {
   /* Type your code here. Your code must call the functions.  */
int num1; cin>>num1;
int num2; cin>>num2;
int num3; cin>>num3;
int num4; cin>>num4;


int max= MaxNumber(num1,num2,num3,num4);
int min= MinNumber(num1,num2,num3,num4);

cout<<"Maximum is "<<max<<endl;
cout<<"Minimum is "<<min<<endl;
   return 0;
}
