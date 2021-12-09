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




