#include <stdio.h>

findsum(int n)
{
  // write code here
  int sum = 0;
  for(int i=1;i<=n;i++)
  {
    sum+=i;
  }
  return sum;
}
int main()
{
   //find the sum of n terms
   //return the sum of N terms
   int n;
   scanf("%d",&n);
   printf("%d",findsum(n));
}