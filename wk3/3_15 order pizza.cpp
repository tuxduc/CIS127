#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*
Goal: outpus subtotal for Pizzas.
double values to 2 digits
ex:
Ex: If the input is:

3
the output is:

Pizzas: 3
Subtotal: $44.97
Total due: $48.57
*/
int main() {
	int numPizza;
	double subTotal;
	double totalDue;
	
	/* Type your code here */

    cin >> numPizza;
    subTotal = numPizza * 14.99;
    totalDue = subTotal + (subTotal*.08);

    cout << "Pizzas: " << numPizza << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << subTotal << endl;
    cout << "Total due: $" << fixed << setprecision(2) << totalDue<< endl;


	return 0;
}