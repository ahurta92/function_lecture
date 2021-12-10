#include "problems.h"

int main(){
    string label = "Fibonacci";
    vector<int> v = {1, 2, 3, 4, 6, 9};
    fibonacci(0, 1, v, 100);// call the fibonaci function
    int max = 0;
    int min = 0;
    int median = 0;
    double mean = 0;
    problem7(v,min,max,mean,median);
    cout << "The largest int is " << max << endl;
    cout << "The smallest int is " << min << endl;
    cout << "The mean double is " << mean << endl;
    cout << "The median int is " << median << endl;
}

