#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    REQUIRE(sumtail(10,0) == 55); //1 + 2 + 3 + 4 ... + 10 = 55
    REQUIRE(sumtail(1,0) == 1); //base case

}

TEST_CASE("sumwhile")
{
    REQUIRE(sumwhile(10) == 55); //1 + 2 + 3 + 4 ... + 10 = 55
    REQUIRE(sumwhile(1) == 1); //base case

}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{ 
    REQUIRE(fib(0,0,1)==0);//base case
    REQUIRE(fib(5,0,1)==5); //fib(5,0,1) = 5;
    REQUIRE(fib(8,0,1)==21); //fib(8) = 0  1  1  2  3  5  8  13 21, 21 is the 8'th number;
    REQUIRE(fib(1,0,1) == 1);  //base case
}



