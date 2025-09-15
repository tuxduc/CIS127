#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double HOMEWORK_MAX = 800.0;
   double QUIZZES_MAX = 400.0;
   double MIDTERM_MAX = 150.0;
   double FINAL_MAX = 200.0;

//get inputs
string studentStatus; cin>>studentStatus; //valid status: UG, G, DL
double hwPts; cin>>hwPts; //800pts
double qzPts; cin>>qzPts;//400pts
double mtPts; cin>>mtPts;//150pts
double exPts; cin>>exPts;//200pts

//initialize percentage calculations variables
double hwScore = (hwPts/HOMEWORK_MAX)*100;
double qzScore = (qzPts/HOMEWORK_MAX)*100;
double mtScore = (mtPts/MIDTERM_MAX)*100;
double exScore = (exPts/FINAL_MAX)*100;

//error correcting for % > 100
if (hwScore > 100){
hwScore = HOMEWORK_MAX/HOMEWORK_MAX;
}
if ( qzScore> 100){
qzScore = QUIZZES_MAX/QUIZZES_MAX;
}
if (mtScore > 100){
mtScore = MIDTERM_MAX/MIDTERM_MAX;
}
if (exScore > 100){
exScore = FINAL_MAX/FINAL_MAX;
}
//Calculate each category average using maximum points
//Output an error message if student status is not one of the three options.
if(studentStatus != "UG" && studentStatus != "G" && studentStatus != "DL"){
    cout<<"Error: student status must be UG, G or DL"<<endl;
}
else{
//Otherwise, output category averages as a percentage using cout << "Homework: " << homework << "%" << endl;.
cout << "Homework: " << fixed<< setprecision(1)<<placeholder<< "%" << endl;
cout << "Quizzes: " << fixed<< setprecision(1)<<placeholder << "%" << endl;
cout << "Midterm: " << fixed<< setprecision(1)<< placeholder<< "%" << endl;
cout << "Final Exam: " << fixed<< setprecision(1)<<placeholder<< "%" << endl;
}
   return 0;
}
