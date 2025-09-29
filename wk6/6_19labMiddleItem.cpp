#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
    vector<int> intList;
    int userInput; cin>>userInput;
    while(userInput !=-1){
        intList.push_back(userInput);
        cin>>userInput;
    }

if(intList.size()>9){
    cout<<"Too many numbers"<<endl;
}
else{
    cout<<"Middle item: "<<intList.at(intList.size()/2)<<endl;
}
   return 0;
}
