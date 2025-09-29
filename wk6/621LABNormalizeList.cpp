#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int i;
    double dataIn;
    int listSize; cin>>listSize;
    double maxVal=0;
    vector<double> dataList(listSize);

    for(i=0; i<dataList.size(); ++i){ //input data into vector
        cin >> dataIn;
        dataList.at(i)=dataIn;
    }

    for(i=0; i<dataList.size(); ++i){ //find largest value
        if(dataList.at(i)>maxVal){
            maxVal=dataList.at(i);
        }
    }
    
    for(i=0; i<dataList.size(); ++i){ //divide by largest value
        dataList.at(i)=dataList.at(i)/maxVal;
    }

    for(i=0; i<dataList.size(); ++i){ //output values
        cout<< fixed << setprecision(2)<<dataList.at(i)<<" ";
    }
    cout<<endl;
   return 0;
}
