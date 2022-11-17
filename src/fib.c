/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    if (n==0) {
        return p;
        } //0
    else if (n==1) {
        return pp; //base case, calculations is done. 
    }
    else {
        //shift to the right by making pp the new p, and p+pp the new pp
        return fib(n-1,pp,p+pp); 
    }
    }

