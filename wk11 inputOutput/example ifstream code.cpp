//example Thesarus program, uses file dependencies educate.txt, goal.txt, happy.txt

#include <iostream>
#include <fstream>
using namespace std;

int main() {

ifstream inFS;
string userWord; cin>>userWord;
char userChar;cin>> userChar;

if (userWord == "educate") {//open relevant file
        inFS.open("educate.txt");
    }
    else if (userWord == "goal") {
        inFS.open("goal.txt");
    }
    else if (userWord == "happy") {
        inFS.open("happy.txt");
    }
    else {
        //cout << "Unknown word: " << userWord << endl;
        return 1;
    }

    
if (!inFS.is_open()) {// check if the file opened correctly
    cout << "Failed to open file." << endl;
    return 1;
}
bool matchFound=false;
string fileInputString;
while(inFS>>fileInputString){ //while we are still getting input, look at the beginning character. if it matches userChar, output those words
    if(fileInputString.at(0)==userChar){
        matchFound=true;
        cout<<fileInputString<<endl;
    }
}

if(matchFound==false){
    cout<<"No synonyms for "<<userWord<<" begin with "<<userChar<<"."<<endl;
}

inFS.close();//close the file

   return 0;
}
