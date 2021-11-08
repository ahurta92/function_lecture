//
// Created by adrian on 11/8/21.
//
int fibonacci(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return fibonacci(n-1)+ fibonacci(n-1);
    }

}

int main() {

    int x=4;
    printNumberIfEven(x);
    // simply prints on screen
    int y=5;
    printNumberIfEven(y);


}

