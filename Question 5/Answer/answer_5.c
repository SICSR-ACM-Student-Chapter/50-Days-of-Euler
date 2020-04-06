#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fptr;
char ch;
char str[51];
int i;
long long int n,no,sum=0;
fptr=fopen("1h50.txt","r");
if(fptr==NULL) //checking if the file has openend successfully or not
{
  printf("Unable to open file");
}
else
{
  while(!feof(fptr))
  {
    fgets(str,52,fptr);
    no=0;
    for(i=0;i<14;i=i+1)
    {
      ch=str[i];
      n=ch-'0';
      no=(no*10)+n;
    }
    // printf("%lld ",no);
    sum=sum+no;
  }
  sum=sum/1000000;
  printf("The first ten digits of the sum are = %lld ",sum);
  fclose(fptr);
}

return 0;

}
