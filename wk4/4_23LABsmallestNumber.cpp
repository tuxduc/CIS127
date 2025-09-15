#include <iostream>
using namespace std;

int main() {
   int val1;
   int val2;
   int val3;
   int valSml;

   cin>>val1;
   cin>>val2;
   cin>>val3;

if((val1<val2)&&(val1<val3)){
valSml=val1;
}
else if (val2<val3){
valSml=val2;
}
else{
    valSml=val3;
}

   cout<<valSml<<endl;

   return 0;
}