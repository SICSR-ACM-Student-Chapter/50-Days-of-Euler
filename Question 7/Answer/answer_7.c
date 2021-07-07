#include<stdio.h>
int one(int n);
int two(int n);
int tenth(int n);

int main()
{
  // char ones[5][9]={{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"}};
  // char twos[][]={{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"fifteen"},{"sixteen"},{"seventeen"},{"eighteen"},{"nineteen"}};
  // char tenths[][]={{"ten"},{"twenty"},{"thirty"},{"forty"},{"fifty"},{"sixty"},{"seventy"},{"eighty"},{"ninety"}};
  int ones[9]={3,3,5,4,4,3,5,5,4};
  int twos[9]={6,6,8,8,7,7,9,7,8};
  int tenths[9]={3,6,6,5,5,5,7,6,6};
  int i,rem,rem1,rem2,sum=0;
  for(i=1;i<100;i=i+1)
  {
    if(i<10)
    {
      sum+=ones[i-1];
    }
    else if(i>9&&i<100)
    {
      rem=i/10;
      rem1=i%10;
      if(i>10&&i<20)
      {
        sum=sum+twos[i-11];
      }
      else if(i%10==0)
      {
        sum=sum+tenths[rem-1];
      }
      else
      {
        sum=sum+tenths[rem-1];
        sum=sum+ones[rem1-1];
      }
    }
  }
  sum=sum*9;
  for(i=1;i<10;i=i+1)
  {
    sum+=((ones[i-1]+10)*99)+(ones[i-1]+7);
  }
  sum+=11;
  printf("%d ",sum);
  return 0;
}
