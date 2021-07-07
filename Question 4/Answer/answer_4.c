#include<stdio.h>
int main()
{
  int arr[20][20]={{8,2,22,97,38,15,0,40,0,75,4,5,7,78,52,12,50,77,91,8},{49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,4,56,62,0},{81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,3,49,13,36,65},{52,70,95,23,4,60,11,42,69,24,68,56,1,32,56,71,37,2,36,91},{22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},{24,47,32,60,99,3,45,2,44,75,33,53,78,36,84,20,35,17,12,50},{32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},{67,26,20,68,2,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},{24,55,58,5,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},{21,36,23,9,75,0,76,44,20,45,35,14,0,61,33,97,34,31,33,95},{78,17,53,28,22,75,31,67,15,94,3,80,4,62,16,14,9,53,56,92},{16,39,5,42,96,35,31,47,55,58,88,24,0,17,54,24,36,29,85,57},{86,56,0,48,35,71,89,7,5,44,44,37,44,60,21,58,51,54,17,58},{19,80,81,68,5,94,47,69,28,73,92,13,86,52,17,77,4,89,55,40},{4,52,8,83,97,35,99,16,7,97,57,32,16,26,26,79,33,27,98,66},{88,36,68,87,57,62,20,72,3,46,33,67,46,55,12,32,63,93,53,69},{4,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},{20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,4,36,16},{20,73,35,29,78,31,90,1,74,31,49,71,48,86,81,16,23,57,5,54},{1,70,54,71,83,51,54,69,16,92,33,48,61,43,52,1,89,19,67,48}};

  int sum4=arr[0][0]*arr[1][1]*arr[2][2]*arr[3][3];
  int sum5=arr[0][19]*arr[1][18]*arr[2][17]*arr[3][16];
  int max=0,i,j=3,k,l,sum=1,sum1=1,sum2=1,sum3=1;

  k=19;
  l=15;
  
  //row wise and column wise calculation
  
  for(i=0;i<10;i=i+1)
  {
    if(arr[i][0]!=0)
    {
    sum=(arr[i][0]);
  }
  if((arr[i][1])!=0)
  {sum=sum*(arr[i][1]);}
  if((arr[i][2])!=0)
  {sum=sum*(arr[i][2]);}
  if((arr[i][3])!=0)
  {sum=sum*(arr[i][3]);}
  if((arr[k][19])!=0)
    {sum1=(arr[k][19]);}
    if((arr[k][18])!=0)
    {sum1=sum1*(arr[k][18]);}
    if((arr[k][17])!=0)
    {sum1=sum1*(arr[k][17]);}
    if((arr[k][16])!=0)
    {sum1=sum1*(arr[k][16]);}
    if((arr[0][i])!=0)
    {sum2=(arr[0][i]);}
    if((arr[1][i])!=0)
    {sum2=sum2*(arr[1][i]);}
    if((arr[2][i])!=0)
    {sum2=sum2*(arr[2][i]);}
    if((arr[3][i])!=0)
    {sum2=sum2*(arr[3][i]);}
    if((arr[19][k])!=0)
    {sum3=(arr[19][k]);}
    if((arr[18][k])!=0)
    {sum3=sum3*(arr[18][k]);}
    if((arr[17][k])!=0)
    {sum3=sum3*(arr[17][k]);}
    if((arr[16][k])!=0)
    {sum3=sum3*(arr[16][k]);}

    if(sum>sum1&&sum>sum2&&sum>sum3&&sum>max)
    {max=sum; }
    else if(sum1>sum&&sum1>sum2&&sum1>sum3&&sum1>max)
    {max=sum1; }
    else if(sum2>sum&&sum2>sum1&&sum2>sum3&&sum2>max)
    {max=sum2; }
    else if(sum3>sum&&sum3>sum1&&sum3>sum2&&sum3>max)
    {max=sum3; }
    else
    {max=max;}
    for(j=4;j<20;j=j+1)
    {
        if((arr[i][j-4])!=0)
        {sum=sum/(arr[i][j-4]);}
        if(arr[i][j]!=0)
        {sum=sum*arr[i][j];}
        if((arr[k][l+4])!=0)
        {sum1=sum1/(arr[k][l+4]);}
        if(arr[k][l]!=0)
        {sum1=sum1*arr[k][l];}
        if((arr[j-4][i])!=0)
        {sum2=sum2/(arr[j-4][i]);}
        if(arr[j][i]!=0)
        {sum2=sum2*arr[j][i];}
        if((arr[l+4][k])!=0)
        {sum3=sum3/(arr[l+4][k]);}
        if(arr[l][k]!=0)
        {sum3=sum3*arr[l][k];}
        if(sum>sum1&&sum>sum2&&sum>sum3&&sum>max)
        {max=sum;}
        else if(sum1>sum&&sum1>sum2&&sum1>sum3&&sum1>max)
        {max=sum1;}
        else if(sum2>sum&&sum2>sum1&&sum2>sum3&&sum2>max)
        {max=sum2;}
        else if(sum3>sum&&sum3>sum1&&sum3>sum2&&sum3>max)
        {max=sum3;}
        else
        {max=max;}

        l=l-1;
    }
    l=15;
      k=k-1;
      sum=1;
      sum1=1;
      sum2=1;
      sum3=1;
    }
    j=15;
    
    //right diagonal calculation
    
    for(i=4;i<20;i=i+1)
    {
      if((arr[i-4][i-4])!=0)
    {sum4=sum4/(arr[i-4][i-4]);}
    if(arr[i][i]!=0)
    {sum4=sum4*arr[i][i];}
    if((arr[i-4][j+4])!=0)
    {sum5=sum5/(arr[i-4][j+4]);}
    if(arr[i][j]!=0)
    {sum5=sum5*arr[i][j];}
    if(sum4>sum5&&sum4>max)
    {
      max=sum4;
    }
    else if(sum5>sum4&&sum5>max)
    {
      max=sum5;
    }
    else
    {max=max;}
    j=j-1;
  }
  sum=1;
  sum1=1;
    // for(i=1;i<17;i=i+1)
    // {
    //   if((arr[i][0])!=0)
    //   {sum=(arr[i][0]);}
    //   if((arr[i+1][1])!=0)
    //   {sum=sum*(arr[i+1][1]);}
    //   if((arr[i+2][2])!=0)
    //   {sum=sum*(arr[i+2][2]);}
    //   if((arr[i+3][3])!=0)
    //   {sum=sum*(arr[i+3][3]);}
    //   if((arr[i-1][i])!=0)
    //   {sum1=(arr[i-1][i]);}
    //   if((arr[i][i+1])!=0)
    //   {sum1=sum1*(arr[i][i+1]);}
    //   if((arr[i+1][i+2])!=0)
    //   {sum1=sum1*(arr[i+1][i+2]);}
    //   if((arr[i+2][i+3])!=0)
    //   {sum1=sum1*(arr[i+2][i+3]);}
    //   if(sum>sum1&&sum>max)
    //   {
    //     max=sum;
    //   }
    //   else if(sum1>sum&&sum1>max)
    //   {
    //     max=sum1;
    //   }
    //   else
    //   {max=max;}
    //   if(i!=16)
    //   {
    //     for(j=(i+4);j<=19;j=j+1)
    //     {
    //       if((arr[j-4][j-5])!=0)
    //       {sum=sum/(arr[j-4][j-5]);}
    //       if((arr[j][j-1])!=0)
    //       {sum=sum*(arr[j][j-1]);}
    //       if((arr[j-5][j-4])!=0)
    //       {sum1=sum1/(arr[j-5][j-4]);}
    //       if((arr[j-1][j])!=0)
    //       {sum1=sum1*(arr[j-1][j]);}
    //       if(sum>sum1&&sum>max)
    //       {
    //         max=sum;
    //       }
    //       else if(sum1>sum&&sum1>max)
    //       {
    //         max=sum1;
    //       }
    //       else
    //       {max=max;}
    //     }
    //
    //   }
    //   sum=1;
    //   sum1=1;
    // }
    
    //left diagonals calculation
    
    k=17;
    sum=1;
    for(i=18;i>2;i=i-1)
    {
      if((arr[0][i])!=0)
      {sum=(arr[0][i]);}
      if((arr[1][i-1])!=0)
      {sum=sum*(arr[1][i-1]);}
      if((arr[2][i-2])!=0)
      {sum=sum*(arr[2][i-2]);}
      if((arr[3][i-3])!=0)
      {sum=sum*(arr[3][i-3]);}
      // sum1=(arr[i-k][19])+(arr[i-k+1][18])+(arr[i-k+2][17])+(arr[i-k+3][16]);
      if(sum>max)
      {
        max=sum;
      }
      // else if(sum1>sum&&sum1>max)
      // {
      //   max=sum1;
      //   c=i-1;
      //   d=i;
      // }
      else
      {max=max;}
      if(i!=3)
      {
        for(j=4;j<19;j=j+1)
        {
          if((arr[j-4][i-j+4])!=0)
          {sum=sum/(arr[j-4][i-j+4]);}
          if((arr[j][i-j])!=0)
          {sum=sum*(arr[j][i-j]);}
          // sum1=sum1-(arr[i-j+4][j-4])+(arr[i][j]);
          if(sum>max)
          {
            max=sum;
          }
          // else if(sum1>sum&&sum1>max)
          // {
          //   max=sum1;
          //   c=i-1;
          //   d=i;
          // }
          else
          max=max;
        }

      }
      sum=1;
      k=k-1;
    }
    printf("The max sum = %d ",max);
    return 0;
  }
