#include "problems.h"

int main(){
    string label="my label";
    vector<int> v={1,2,3,4,6,9};
    print(v,"original");
    vector<int> rev_v= reverse(v);
    reverse_swap(v);
    print(rev_v,"reverse(v)");
    print(v," reverse_swap(v)");
}

