#include "problems.h"

int main(){
    string label="Fibonacci";
    vector<int> v={1,2,3,4,6,9};
    fibonacci(0,1,v,10);
    print(v,label);
}

