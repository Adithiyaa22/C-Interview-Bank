#include <stdio.h>

int sumofdigits(n)
{
  int sum = 0;
  while(n>0)
  {
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main()
{
  /*
    Question: Print the sum of the digits of a number
    input constraints : 0 <= n <= 1000
    given 'n' as integer 
    
    Example 1 
    
    input : 15
    
    output : 6
    
    explanation :
    the number n '15' the digits are 1 and 5 
    which are added 1+5 = 6 
    
    
    Example 2 
    
    input : 09
    
    output : 9
    
    explanation :
    the number n '09' the digits are 0 and 9
    which are added 0+9 = 9 
  */
  
  int n;
  scanf("%d",&n);
  printf("%d",sumofdigits(n));
}