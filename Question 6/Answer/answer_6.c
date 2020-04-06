#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,k=0,l,f=1,flag,sum,n;
  sum=(5000/2)*((2*1)+(5000-1)*1);
  l=5001;
  while(1)
  {
    n=sum;
    i=2;
    while(sum!=1)
    {
      flag=0;
      for(j=2;j<=sqrt(i);j=j+1)
      {
        if(i%j==0)
        {
          flag=flag+1;
        }
      }
      if(flag==0)
      {
      if(sum%i==0)
      {
        while(sum%i==0)
        {
          sum=sum/i;
          k=k+1;
        }
        f=f*(k+1);
        k=0;
      }
    }
    i=i+1;
    }
    if(f>500)
    {
      break;
    }

    f=1;
    sum=(l/2)*((2*1)+(l-1)*1);
    l=l+1;
  }
  printf("The triangle number is %d ",n);
  return 0;
}
