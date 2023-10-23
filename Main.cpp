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

int getMin(vector<int>& vectorToBeMinimized){
    int minNum = 0;
    for(int i=0 ; i<vectorToBeMinimized.size() ; i++){
        minNum = min(minNum, vectorToBeMinimized[i]);
    }
    return minNum;
}

int main(){
    vector<int> vectorToBeSummed{2, 6, 17, 7, 8, 21, 3, 9, 1, 13};
    cout<<"Sum of Vector Elements = "<<getSum(vectorToBeSummed)<<'\n';
    cout<<"Minimum of Vector Elements = "<<getMin(vectorToBeSummed)<<'\n';

    return 0;
}