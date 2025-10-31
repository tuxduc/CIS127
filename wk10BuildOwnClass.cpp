/*
Basic Addition Program
Your class should include the following:

    At least two data members (variables inside the class)
    At least one constructor to initialize those data members
    At least one member function that performs an action or outputs something about the object

In your program, you should:
    Create at least one instance (object) of your class
    Call the member function at least once to demonstrate how it works
*/

#include <iostream>
using namespace std;

class AddNumbers{
    private:
        int num1=0;
        int num2=0;
        int total=0;

    public:
    //constructors
    AddNumbers(int userNum1, int userNum2) {
        num1 = userNum1;
        num2 = userNum2;
        total = num1 + num2;
    }
    void printResult(){cout<<"Your sum is "<<total<<".";}
};


int main() {
    cout << "Math is great! Let's add some numbers!" << endl;

    cout << "What's your first number? ";
    int userNum1;
    cin >> userNum1;

    cout << "What's your second number to add? ";
    int userNum2;
    cin >> userNum2;

    AddNumbers useradd(userNum1, userNum2);
    useradd.printResult();

    return 0;
}

