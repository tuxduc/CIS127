#include <iostream>
#include <string>
using namespace std;

int main() {

   string usrStr;

do{
    getline(cin, usrStr);
    for(int i=usrStr.length(); i>-1; i--){
    cout<<usrStr[i];
   }
   cout<<endl;

} while((usrStr!="Done")&&(usrStr!="done")&&(usrStr!="d"));

   return 0;
}
