//Question 1. The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.
#include<stdio.h>
long Prime(long sum)
{
    //variable declaration
    long i;
    int count;
    //main logic
    for(i=2;i<2000000;i++)
    {
        count=0;
        for(long j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            sum=sum+i;
        }
    }
    return sum; //returning the value of sum
}


int main()
{
 //variable declaration
 long sum=0;
 sum=Prime(sum); //call to Prime(Args) function
 printf("value of prime n under 2 million is %ld \n",sum);//printing value of sum
 return 0;//Indicates program ran successfully
}
