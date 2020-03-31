/**

Name: Kumar Ashwin
Email: krashwin00@gmail.com
Date: 31st March, 2020
Version: v1
Problem Statement: The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.

**/

#include<stdio.h>
#include<math.h>

//prime-check function
int isPrime(long n)
{
	long i;
	// loop is run till the sqrt(n), to reduce the time by 1/2
	for(i=2;i<=(int)sqrt(n);i++)
		if(n%i==0)
			break;
	
	// checking if the loop is run till the end or not
	if(i==((int)sqrt(n)+1))
		return 1;
	else
		return 0;
}

int main()
{
	long i,prime_sum=5;
	for(i=5;i<2000000;i++)
	{
		if(isPrime(i)==1)
			prime_sum+=i;
	}
	printf("Sum of all PrimeNumbers till 2 Million are %ld \n",prime_sum);
	return 0;
}
