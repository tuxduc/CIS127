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
double qzScore = (qzPts/QUIZZES_MAX)*100;
double mtScore = (mtPts/MIDTERM_MAX)*100;
double exScore = (exPts/FINAL_MAX)*100;

//error correcting for % > 100
if (hwScore > 100){
hwScore = 100;
}
if ( qzScore> 100){
qzScore = 100;
}
if (mtScore > 100){
mtScore = 100;
}
if (exScore > 100){
exScore = 100;
}

//student status course average total pts =1550
double courseAvg = 0;
if (studentStatus == "UG"){
courseAvg = (hwScore*.20)+(qzScore*.20)+(mtScore*.30)+(exScore*.30);
}

else if (studentStatus == "G"){
courseAvg = (hwScore*.15)+(qzScore*.05)+(mtScore*.35)+(exScore*.45);
}

else if (studentStatus == "DL"){
courseAvg = (hwScore*.05)+(qzScore*.05)+(mtScore*.40)+(exScore*.50);
}
//course letter grade calculation
string courseLetter;
if(courseAvg >= 90.0){courseLetter = "A";}
else if(courseAvg >= 80 && courseAvg < 90){courseLetter = "B";}
else if(courseAvg >= 70 && courseAvg < 80){courseLetter = "C";}
else if(courseAvg >= 60 && courseAvg < 70){courseLetter = "D";}
else if(courseAvg < 60){courseLetter = "F";}

//Calculate each category average using maximum points
//Output an error message if student status is not one of the three options.
if(studentStatus != "UG" && studentStatus != "G" && studentStatus != "DL"){
    cout<<"Error: student status must be UG, G or DL"<<endl;
}
else{
//Otherwise, output category averages as a percentage using cout << "Homework: " << homework << "%" << endl;.
cout << "Homework: " << fixed<< setprecision(1)<<hwScore<< "%" << endl;
cout << "Quizzes: " << fixed<< setprecision(1)<<qzScore << "%" << endl;
cout << "Midterm: " << fixed<< setprecision(1)<< mtScore<< "%" << endl;
cout << "Final Exam: " << fixed<< setprecision(1)<<exScore<< "%" << endl;
cout << studentStatus <<" average: "<<fixed<< setprecision(1)<< courseAvg << "%" << endl;
cout << "Course grade: "<< courseLetter << endl;
}
   return 0;
}
