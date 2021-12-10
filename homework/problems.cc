#include "problems.h"



void print(const vector<int>& v, const string& label) {
    cout<<label<<": ";
    for (int i = 0; i < v.size(); i++)cout << v[i] << " ";
    cout<<endl;
}

void fibonacci(int x,int y,vector<int>&v,int n){
    v.clear();
    v.push_back(x);
    v.push_back(y);
    for(int i=2;i<n;i++){
        v.push_back(v[i-1]+v[i-2]);
    }
}

vector<int> reverse(vector<int> v){
   vector<int> rev_v;
   int n=v.size();// get the size of the vector
   // start at the back and go backwards to reverse
   // iterate till the front
   for(int i=n-1;i>=0;i--){
      rev_v.push_back(v[i]);
   }
   return rev_v;

}
void reverse_swap(vector<int>& v ){
    int n=v.size()-1;// get the last element of the vector
    for(int i=0;i<v.size()/2;i++){// only go to the middle element
        int tmp=v[i];//swap
       v[i]=v[n-i];// last element -1
       v[n-1]=tmp;//
    }
}


double productSum(vector<double> price,vector<double> weight){
    if(price.size()!=weight.size()){// check if sizes are correct
        return NAN;
    }
    double product_sum=0;// create initial value
    for(int i=0;i<=price.size();i++){
        product_sum+=price[i]*weight[i];  // sum = sum+ price*wieght
    }
    return product_sum;
}


int maxv(vector<int>&v){

   int max=-100000;// set max to a small number
  for(int i =0;i<v.size();i++){
      if(v[i]>max){//if v[i] is greater than max then max is v[i]
          max=v[i];
      }
  }
  return max;

}

void problem7(vector<int> &v, int &small, int &large, double &mean, int &median) {
    // the trick is to sort first

    sort(v.begin(),v.end());
    small=v[0];
    large=v[v.size()-1];
    median=v[v.size()/2];
    mean=0;

    for(int i=0;i<v.size();i++){
        mean+=v[i];
    }
    mean=mean/v.size();
}
