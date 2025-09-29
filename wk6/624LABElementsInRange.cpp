#include <iostream>
#include <vector>
using namespace std;

int main() {

    unsigned int i;
    int listSize; cin>>listSize;
    vector<int> dataList(listSize);
    
    int dataIn;
    for(i=0; i<dataList.size(); ++i){ //input data into vector
        cin >> dataIn;
        dataList.at(i)=dataIn;
    }

    int lowBound;cin>>lowBound; int upBound;cin>>upBound; //bounds
    for(i=0; i<dataList.size(); ++i){ //bounds check
        if(dataList.at(i)>=lowBound && dataList.at(i)<=upBound){
            cout<<dataList.at(i)<<",";
        }
    }
    cout<<endl;

   return 0;
}
