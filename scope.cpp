//
// Created by adrian on 11/8/21.
//
int numCalls = 0;

int raiseToPower(int base, int exponent) {
    numCalls = numCalls + 1;
    int result = 1;
    for (int i = 0; i < exponent; i = i + 1) {
        result = result * base;
    }
    return result;
}

int max(int num1, int num2) {
    numCalls = numCalls + 1;
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}
double squareRoot(double num){
    double low=1.0;
    double high=num;
    for(int i=0;i<30;i=i+1){
        double estimate=(high+low)/2;
        if(estimate*estimate>num){
            double newHigh=estimate;
            high=newHigh;
        }else{
            double newLow=estimate;
            low=newLow;
        }
    }
    return(high+low)/2;
}

int main() {


}

