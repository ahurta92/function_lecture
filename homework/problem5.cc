#include "problems.h"

int main(){
    string label="my label";
    vector<double> myPrice={1.0,2.4,3.23};
    vector<double> myWeights={2.0,4.4,5.0};
    vector<double> myWeights_WrongSize={1.0,2.0,4.4,5.0};

    double p_sum= productSum(myPrice,myWeights);
    double p_sum2= productSum(myPrice,myWeights_WrongSize);

    cout<<"product sum = "<<p_sum<<endl;
    cout<<"product sum = "<<p_sum2<<endl;


}

