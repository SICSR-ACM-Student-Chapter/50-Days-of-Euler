/**

Name: Kumar Ashwin
Email: krashwin00@gmail.com
Date: 2nd April, 2020
Version: v2
Problem Statement: There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

**/

#include<stdio.h>
#include<math.h>
int main()
{
    int m=2,n;
    int a,b,c,sum,pro;
    while(a<333)  //as a being the smallest number it must not exceed 333
    {
        for(int n=1;n<m;n++)
        {
            //Using Euclid's formulae to find out the triplets (a,b,c)
            a=2*m*n;
            b=pow(m,2)-pow(n,2);
            c=pow(m,2)+pow(n,2);

            //finding if the sum of triplets are a multiple of 1000, then we can multiply each digit of triplet to find the numbers when added form 1000.
            sum=a+b+c;
            if(1000%sum==0)     
            {
                sum=1000/sum;
                pro=(a*sum)*(b*sum)*(c*sum);
                break;
            }
        }
        m++;
    }
    printf("abc=%d",pro);
    return 0;
}
