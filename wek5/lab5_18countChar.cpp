#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

   char inputChar; cin>>inputChar;
   string inputString; getline(cin, inputString);
   int matches=0;
   // iterate over length of string. if char matches, increase matches
    for(int i=0; i<inputString.length(); i++){
        if(inputString[i]==inputChar){
            matches++;
        }
    }
if(matches==1){
    cout<<matches<<" "<<inputChar<<endl;
}
else{
    cout<<matches<<" "<<inputChar<<"'s"<<endl;
}


   return 0;
}