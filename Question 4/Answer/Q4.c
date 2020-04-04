/**

Name: Kumar Ashwin
Email: krashwin00@gmail.com
Date: 4th April, 2020
Version: v1
Problem Statement: What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid (Included in the file)?

**/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[20][20],i,j,max=0,pro;
    FILE* fptr;
    fptr=fopen("Q4_help_text.txt","r");
    if(fptr==NULL)
    {
        perror("File Issue: ");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(i=0;i<20;i++)
        {
            for(j=0;j<20;j++)
                if(fscanf(fptr,"%d ",&array[i][j]) != 1)
                    exit(EXIT_FAILURE);
        }

        for(i=0;i<20;i++)
        {
            for(j=0;j<20;j++)
            {
                //product for 4 adjacent values in rows
                if(i<17)
                {
                    pro = array[i][j]*array[i+1][j]*array[i+2][j]*array[i+3][j];
                    if(pro>max)
                        max=pro;
                }
                //product for 4 adjacent values in cols
                if(j<17)
                {
                    pro = array[i][j]*array[i][j+1]*array[i][j+2]*array[i][j+3];
                    if(pro>max)
                        max=pro;
                }
                //product for 4 adjacent values in diagonal (top-left)
                if(i<17 && j<17)
                {
                    pro=array[i][j]*array[i+1][j+1]*array[i+2][j+2]*array[i+3][j+3];
                    if(pro>max)
                        max=pro;
                }
                //product for 4 adjacent values in diagonal (top-right)
                if(i<17 && j>2)
                {
                    pro=array[i][j]*array[i+1][j-1]*array[i+2][j-2]*array[i+3][j-3];
                    if(pro>max)
                        max=pro;
                }
            }
        }
        printf("max product in the grid is %d",max);
        fclose(fptr);
    }
    return 0;
}