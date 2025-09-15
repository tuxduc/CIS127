#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double HOMEWORK_MAX = 800.0;
   double QUIZZES_MAX = 400.0;
   double MIDTERM_MAX = 150.0;
   double FINAL_MAX = 200.0;

//initialize variables
string studentStatus; cin<studentStatus; //valid status: UG, G, DL
double hwPoints; cin<<hwPoints; //800pts
double qzPoints; cin<<qzPoints;//400pts
double mtScore; cin<<mtScore;//150pts
double exScore; cin<<exScore;//200pts

//Calculate each category average using maximum points
//Output an error message if student status is not one of the three options.
if ((studentStatus != "UG")&&(studentStatus != "G")&&(studentStatus != "DL")&&){
    cout<<"Error: student status must be UG, G or DL"<<endl;
}
else{
//Otherwise, output category averages as a percentage using cout << "Homework: " << homework << "%" << endl;.
cout << "Homework: " << (hwPoints/HOMEWORK_MAX) << "%" << endl;
cout << "Quizzes: " << (qzPoints/QUIZZES_MAX) << "%" << endl;
cout << "Midterm: " << (mtScore/MIDTERM_MAX) << "%" << endl;
cout << "Final Exam: " << (exScore/FINAL_MAX) << "%" << endl;
}

   return 0;
}
