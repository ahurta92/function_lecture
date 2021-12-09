//
// Created by adrian on 10/30/21.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "problems.h"

// Returning Strings Problem
TEST_CASE("Test Fibonacci") {
    vector<int> fib1={0,1,1,2,3,5,8};
    vector<int> fib2={4,8,12,20,32};
    vector<int> test_fib1;
    vector<int> test_fib2;
    fibonacci(0,1,test_fib1,7);
    fibonacci(4,8,test_fib2,5);
    CHECK(test_fib1==fib1);
    CHECK(test_fib2==fib2);
}

TEST_CASE("Test Fibonacci") {
    vector<int> fib1={0,1,1,2,3,5,8};
    vector<int> fib1_rv=reverse({8,5,3,2,1,1,0});
    CHECK(fib1==fib1_rv);
}