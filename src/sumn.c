#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if (n == 1) {
        return 1; //base case
    }
    else {
        return sumn(n-1) + (2*n-1); //recursive step, ex, sumn(2) returns 1 + (4-1) = 4
         }
}

