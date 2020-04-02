#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  char ch[1000];
  FILE *fptr; //pointer to the file
  int i,j,n,temp,pos;
  float prod=1,max=1;
  fptr=fopen("1Kdigits.txt","r"); //stored the digits in a file 
  if(fptr==NULL) //checking if the file has openend successfully or not
    printf("Unable to open file");
  else
  {
      fgets(ch,1000,fptr);
      j=0;
  i=0;
  while(i<13)
  {
    n=ch[j]-'0';
    if(n==0)
    {
      prod=1;
      i=0;
    }
    else
    {
      prod=prod*n;
      i=i+1;
  }
j=j+1;
  }
  pos=j-1;
  i=13;
  max=prod;
  while(j<1000)
  {
    n=ch[j]-'0';
    if(n==0)
    {
      if (i>=13&&prod>max)
      {
          max=prod;
          pos=j;
      }
      prod=1;
      i=0;
    }
    else
  {
    if(i<13)
    {
      prod=prod*n;
      i=i+1;
    }
    else
    {
      if(prod>max)
      {
        max=prod;
        pos=j;
      }
        temp=ch[j-13]-'0';
        prod=prod/temp;
        prod=prod*n;
      }

    }
    j=j+1;
  }
  if(prod>max)
  {
    max=prod;
    pos=j;
  }
}
  printf("The highest product is %f",max);
  return 0;
}
