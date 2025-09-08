#include <iostream>
#include <iomanip>   
#include <cmath>    
using namespace std;

int main() {
   int people;
   int numPizzas;
   double cost;

   /* Type your code here. */
   cin >> people;
   numPizzas = ceil((people * 2)/12.0);
   cost = 14.95 * numPizzas;

   cout << "People: "<< people << endl;
   cout << "Pizza(s) needed: " << numPizzas << endl;
   cout << "Cost for " << numPizzas << " pizza(s): $" << fixed << setprecision(2) << cost << endl;
   
   return 0;
}