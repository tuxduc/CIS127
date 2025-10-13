#include <iostream>
using namespace std;

//goal: swap 1 & 2, and 3 & 4, then print.

/* Define your function here */ 
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4){
cout<<"Hello Dolly!";
}

int main() {
   /* Type your code here. Your code must call the function.  */
int userVal1; cin>>userVal1;
int userVal2; cin>>userVal2;
int userVal3; cin>>userVal3;
int userVal4; cin>>userVal4;

SwapValues(userVal1,userVal2,userVal3,userVal4);

cout<<userVal1<<" "<<userVal2<<" "<<userVal3<<" "<<userVal4<<endl;
   return 0;
}