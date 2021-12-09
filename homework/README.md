# Functions Homework

For this homework your task was to write a set of functions 
to perform a series of tasks defined in `problems.h`. For each
problem you needed to write a function which completes a task and
then call the function from the main function in `problemX.cc`.  Notice 
that all the function definitions are written in `problems.cc`.  If 
you do not understand what function definitions and function declarations 
please read [](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm).  

## Some general notes on functions

If you need some clarification on functions I suggest you read some of the 
following links.  Try writing the code yourself.  Make sure you understand
what functions, how to write a function, and how to call a function.  This
is a very important concept in programming.

[Function Tutorial](https://www.cplusplus.com/doc/tutorial/functions/)
[Basic Function](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm)

## Problem 1

The task is to write a function named `print` which takes in a string and a vector
and prints the elements of the vector onto the screen.  

### Declaration

All function declarations are in the header file `problems.h`

In the file "problems.h" we create the function declaration.   
The function declaration tells the compiler three things:
    - The function name
    - The function return type. 
    - The function inputs and input types.

We need to write a function that prints a `vector` of `int`s to the screen along with 
a label defined as a `string`. Since this function only prints values to a screen
we know that the functions return type is `void`.  

We declare the function in `problems.h` as so.

```cpp
void print(const std::vector<int>& v,const string& label);
```

### Definition

Now that we have declared the function we still have to provide a
function definition.  In this homework we place all the function
definitions in `problems.`.  To define a function we
need to write the exact function signature as in the declaration a
and then provide the body of the code in the curly braces `{}`.

```cpp
// function definition
void print(const vector<int>& v, const string& label) {
    cout<<label<<": ";// print out the label
    // v.size() gives us the size of the vector
    for (int i = 0; i < v.size(); i++){// for every value in the vector
        cout << v[i] << " ";// print v[i] followed by a space
    }
    cout<<endl;// finish by printing a new line after the last element
}
```

- Notice that the top line of the function definition matches the declaration.
- First we print the label
- We then use a for loop to access every element of the vector
  - For each element we print each element followed by a space
- We finish by printing a new line after the last element
- Notice that we do not return a value from this function


Now that we have declared the function this allows us 
to call the function from a main program or any other functions.
For example,

```cpp
   void f(){
    vector<int> a={1, 2,3,4,5,};// create a vector of size 5
    vector<int> b(4);// create a vector of size 4 with default value 0
    print(a,"vector a");
    print(b,"vector b");
} 
```

The code will print the vector of integers using functions you defined. 

For problem 1 the main function is defined in `problem1.cc`

```cpp
#include "problems.h"// this line is very important
// Here we are declaring the function

int main(){
    string label="my label";// create a label
    vector<int> v={1,2,3,4,6,9};// create a vector
    print(v,label);// print the vector with a label
}
```

## Problem 2

Problem 2 is to write a function that creates a vector of Fibonacci numbers.
The function should have 4 inputs
Inputs:
    - `int x`  the first number in the sequence
    - `int y`  the second number in the sequence
    - `vector<int>& v` The vector that we are modifying to save the sequnce 
    - `int n`

Again the first task is to declare the function in `problems.h`.
Since we are passing the vector that we are modifying as an input the return
type will be `void`.  

```cpp
void fibonacci(int x,int y,vector<int>& v,int n);
```

Notice `&`  that means we are passing the argument by reference.
This basically means we are passing the actual object from the scope
of where the function is being called from instead of just
creating a copy of vector in the function scope.  For those who 
are not familiar with pass by reference vs pass by value please read
the following link [link](https://www.cs.fsu.edu/~myers/c++/notes/references.html).

Here is the function definition.  The task is to create a Fibonacci sequence
of size n.  The first step is to clear the vector that we pass in.  It is
possible the vector we pass in already has values therefore we clear it
using `v.clear()`.  `v.clear()` is a function that clears our vector.
Since `x` and `y` are the first two values we can add those values into the first two
locations using `v.push_back(x)` and `v.push_back(y)`.

To create the rest of the we need to add the rest of the values from position 
2 all the way to position `n-1`.  We do this with a for loop.  For each value
we are adding we simply push_back the sum of the previous two values.  

```cpp
void fibonacci(int x,int y,vector<int>&v,int n){
    v.clear();// clear vector`
    v.push_back(x);// push back first value [x]
    v.push_back(y);// [x,y]
    for(int i=2;i<n;i++){
       v.push_back(v[i-1]+v[i-2]);// push back the previous two
    }
}
```




