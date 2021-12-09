#include "problems.h"


void fibonacci(int x,int y,vector<int>&v,int n){
    v.clear();
    v.push_back(x);
    v.push_back(y);
    for(int i=2;i<n;i++){
       v.push_back(v[i-1]+v[i-2]);
    }
}


