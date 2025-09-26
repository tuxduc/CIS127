#include <iostream>
using namespace std;

int main() {

   //cout<<"hello im here!";
   cout<<"Give me 3 inputs!"<<endl;
   int a,b,c;cin>>a>>b>>c;
   int x,y;
   bool solutionFound=false;
   for(x=0; x<=5; x++){
    for(y=0; y<=5; y++){
        int equation=(a*x)+(b*y); //iterate over this equation
        if(equation==c){
            solutionFound=true;
            break;
        }
        else{
            continue;
        }
    }
}
if(solutionFound==true){
    cout<<"Success!"<<"x= "<<x<<", y= "<<y;
}
else{
    cout<<"No solution found.";
}
   return 0;
}
