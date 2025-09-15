#include <iostream>
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
test values for Change: 24, 65, 373
*/
    int Change; cout<<"how much change do you have?"; cin>>Change;
    int Dollars;
    int Quarters;
    int Dimes;
    int Nickels;
    int Pennies;

//Dollars
Dollars = Change/100;
Change = Change%100;
//Quartes
Quarters = Change/25;
Change = Change%25;
//Dimes
Dimes = Change/10;
Change = Change%10;
//Nickels
Nickels = Change/5;
Change = Change%5;
//Pennies
Pennies = Change/1;
Change = Change%1;

cout<<Dollars<<endl;
cout<<Quarters<<endl;
cout<<Dimes<endl;
cout<<Nickels<<endl;
cout<<Pennies<<endl;

cout<<Change<<endl; //get the totals for each declination adn then if that values = 0, dont print it

   return 0;
}