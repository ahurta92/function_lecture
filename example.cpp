
#include "examples.h"

//
// Created by adrian on 11/8/21.
//
int raiseToPower(int base, int exponent) {
    int result =1;
    for(int i=0;i<exponent;i=i+1){
        result=result*base;
    }
    return result;
}
void printNumber(int num){
    cout<<"number is "<<num<<endl;
}

void printNumberIfEven(int num) {
    if(num%2==1) {
        cout << "odd number "<<endl;
        return;
    }
    cout<<"even number; number is"<<num<<endl;
}



