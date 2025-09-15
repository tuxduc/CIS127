#include <iostream>
#include <cmath>
using namespace std;


int main() {
/*
Goal: Output change using fewest coins
Dollars,Quarters,Dimes,Nickles,Pennies
1 Dollar =...
    4 Quarters
    10 Dimes
    20 Nickles
    100 Pennies
test values for Change: 24, 65, 373 (3,2,2,0,3)
whenever there is a value greater that 0 , print that, checking for singular or plurality (ie; if more than 1 Penny, print "x Pennies")
*/
    int Change; cin>>Change;
    int Dollars;
    int Quarters;
    int Dimes;
    int Nickels;
    int Pennies;


if(Change==0){
    cout<<"No change"<<endl;
}
else{
//get the totals for each declination
//Dollars
Dollars = floor(Change/100);
    Change = Change%100;
//whenever there is a value greater that 0, print that, checking for singular or plurality (ie; if more than 1 Penny, print "x Pennies")
if(Dollars==1){
    cout<<Dollars<<" Dollar"<<endl;
}
else if(Dollars>1){
    cout<<Dollars<<" Dollars"<<endl;
}
//Quartes
Quarters = floor(Change/25);
    Change = Change%25;
if(Quarters==1){
    cout<<Quarters<<" Quarter"<<endl;
}
else if(Quarters>1){
    cout<<Quarters<<" Quarters"<<endl;
}
//Dimes
Dimes = floor(Change/10);
    Change = Change%10;
if (Dimes==1){
    cout<<Dimes<<" Dime"<<endl;
}
else if(Dimes>1){
    cout<<Dimes<<" Dimes"<<endl;
}
//Nickels
Nickels = floor(Change/5);
    Change = Change%5;
if (Nickels==1){
    cout<<Nickels<<" Nickel"<<endl;
}
else if(Nickels>1){
    cout<<Nickels<<" Nickels"<<endl;
}
//Pennies
Pennies = floor(Change/1);
    Change = Change%1;
if (Pennies==1){
    cout<<Pennies<<" Penny"<<endl;
}
else if(Pennies>1){
    cout<<Pennies<<" Pennies"<<endl;
}
}


   return 0;
}