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


int fib2(int i)
{
  int a1 = 0, a2 = 1;
  for (int j = 0; j < i; ++j)
  {
    int t = a2;
    a2 += a1;
    a1 = t;

  }
  return(a2);
}
int main()
{
  int x1;
  scanf("%d",&x1);
  printf("%d\n",fib2(x1));
}
