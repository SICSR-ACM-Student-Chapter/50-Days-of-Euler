#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,flag,n;
  long long int sum=2+3+5+7;
  for(i=11;i<2000000;i=i+1)
  { flag=0;
    n=(int)sqrt(i);
    for(j=2;j<=n;j=j+1)
    {
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }
    if(flag!=1)
      sum=sum+i;
  }
  printf("The sum of prime numbers upto 2000000 is %lld",sum);
  return 0;
}
