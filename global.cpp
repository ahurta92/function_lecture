//
// Created by adrian on 11/8/21.
//
int numCalls=0;
void foo(){
    ++numCalls;
}

int main() {

    foo();
    foo();
    foo();
    foo();
    foo();
    cout<<numCalls<<endl;//



}

