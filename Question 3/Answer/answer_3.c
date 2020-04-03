#include<stdio.h>
int main()
{
  int n=1,m,a=1,b,c,flag=0;
  while(1)
  {
    m=n+1;
    while(m<170)
    {
      a=(m*m)-(n*n);
      b=2*m*n;
      c=(m*m)+(n*n);

      if((a+b+c)==1000)
      {
        flag=1;
        break;
      }

      m=m+1;
    }
    if(flag==1)
    break;
    n=n+1;
  }
  printf("The product of the triplet = %d",a*b*c);
  return 0;
}
