#include <stdio.h>
int fib(int x1,int x2,int i)
{
  if (i==0)
    return x1+x2;
  else
  {
    return fib(x2, x1+x2,i-1);
  }
}
int main()
{
  int x1;
  scanf("%d",&x1);
  printf("%d\n",fib(0,1,x1));
}
