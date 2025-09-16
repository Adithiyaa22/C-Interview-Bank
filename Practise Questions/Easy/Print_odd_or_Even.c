#include <stdio.h>
#include<stdbool.h>

 find_odd_or_even(int n)
{
  //Write code here
  if(n % 2 !=0)
  {
    return true;
  }
  else
  {
    return false;
  }
}


int main()
{
    //print the the given number is odd or even
    /*return type 1 - if the given the number n is odd
      else return 0
    */
    
    int n;
    scanf("%d",&n);
    printf("%d\n",find_odd_or_even(n));
}