#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    if (n == 1) {
      return total + n; //if n is 1, we are done;
    }
    else {
      return sumtail(n-1, n + total); //recursive step + add n to total. 
    }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  int total = 0;
  int i = 0;
  while(i <= n) { //add i to total until i > n;
    total += i;
    i++;
  }
  return total;
}

