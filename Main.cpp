#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int>& vectorToBeSummed){
    int sum = 0;
    for(int i=0 ; i<vectorToBeSummed.size() ; i++){
        sum += vectorToBeSummed[i];
    }
    return sum;
}

float getAverage(vector<int>& vectorToBeAveraged){
    float sum = 0;
    for(int i=0 ; i<vectorToBeAveraged.size() ; i++){
        sum += vectorToBeAveraged[i];
    }
    return sum / vectorToBeAveraged.size();
}

int main(){
    vector<int> vectorToBeSummed{2, 6, 17, 7, 8, 21, 3, 9, 1, 13};
    cout<<"Sum of Vector Elements = "<<getSum(vectorToBeSummed)<<'\n';
    cout<<"Average of Vector Elements = "<<getAverage(vectorToBeSummed)<<'\n';

    return 0;
}