#include "problems.h"

int main() {
    string label = "Fibonacci";
    vector<int> v = {1, 2, 3, 4, 6, 9};
    fibonacci(0, 1, v, 100);// call the fibonaci function
    int max = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) {//if v[i] is negative
            max = v[i - 1];// the max value is the value before
            break;// we break to end the for loop
        }
    }
    cout << "The largest int is " << max << endl;
    max = maxv(v);
    cout << "The largest int is " << max << endl;
}
