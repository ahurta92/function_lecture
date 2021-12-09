#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "catch.hpp"

using namespace std;


/*Problem 1
 * Write a function print() that prints a vector
 *  of ints to cout.
 *  Give it two arguments: a string for "labeling" the
 *  output and a vector.
 *
 *  Write the function definition in problems.cc
 */
void print(const std::vector<int>& v,const string& label);
/*Problem 2
 * Create a vector of Fibonacci numbers and print them
 * using the previous function print().  To create
 * the vector, write a function, fibonacci(x,y,v,n),
 * where integers x and y are ints, v is an empty vector<int>,
 * and n is the number of elements to put into v; v[0] will be x
 * and v[1] will be y.  A fibonacci number is one that is part of
 * a sequence where each element is the sum of the two previous
 * ones.  For example, starting with 1 and 2, we get 1,2,3,5,8,13,21,...
 * Your fibonacci() function should make such a sequence starting
 * with its x and y arguments.
 *
 * Create your fibonacci sequence and print in problem2.cc
 */
void fibonacci(int x,int y,vector<int>& v,int n);
/*Problem 3
 * An int can hold integers only up to a maximum
 * number. Find an approximation of that maximum number
 * by using fibonacci().
 *
 * Figure out the largest number n that is still sensible
 *
 * Write your code in problem3.cc
 */

/*Problem 4
 * Write two functions that reverse the order of elements
 * in a vector<int>.  For example, 1,3,5,6,9 becomes 9,7,5,3,1.
 * The first reverse function should produce a new vector with
 * the reversed sequence, leaving the original unchanged.
 * The other reverse function should reverse the elements
 * of its vector without using any other vectors (hint:swap)
 *
 * Write the functions in problem.cc
 * Test your code in problem4.cc
 *
 * You can create a test case is tests.cpp
 */

vector<int> reverse(vector<int>);
void reverse_swap(vector<int>);

/*Problem 5
 * Write a function that given two vector<double>s price
 * and weight computes a value (an  "index") that is the sum
 * of all price[i]*weight[i].  Make sure to have weight.size()==price.size().
 *
 * Write the functions in problem.cc
 * Test your code in problem5.cc
 */

/*Problem 6
 *
 * Write a function maxv() that returns the larges element of a vector argument
 *
 * Write the functions in problem.cc
 * Test your code in problem6.cc
 */

/*Problem 7
 *
 * Write a function that finds the smallest and the largest
 * element of a vector argument and also computes the mean and
 * the median.  Remember you can only return one variable from
 * a function.  Therefore, pass the variables by reference to
 * return all the variables
 *
 *
 * Write the functions in problem.cc
 * Test your code in problem7.cc
 *
 * */








