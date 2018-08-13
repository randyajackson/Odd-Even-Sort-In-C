#include "my.h"

void swap(int * x, int * y)
{
    int temp;
 
    temp = *x;
    *x = *y;
    *y = temp; 
}

void oddEven(int *n, int length)
{
 int i = 0;

 int evenOrOdd = 0;
 int switchCount = 0;
 
 do
 {
 //counts if change was made
 switchCount = 0;

 //evenOrOdd iterates each run

    if(evenOrOdd % 2 == 0)
    {
       for(i = 0; i < length - 1; i = i + 2)
       {
          if(n[i] > n[i+1])
          {
	  swap(&n[i],&n[i+1]);
          switchCount++;
          }
       } 
     }

     else
     { 
       for(i = 1; i < length; i = i + 2)
       {
          if(n[i] > n[i+1])
          {
	  swap(&n[i], &n[i+1]);
          switchCount++;
          } 
       }
     }

 evenOrOdd++;

 }
 while(switchCount != 0);

 return;
}

