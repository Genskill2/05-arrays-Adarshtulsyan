/* Enter your solutions in this file */
#include <stdio.h>
/* Enter your solutions in this file */
#include <stdio.h>
int max(int y[], int size)
{
    int maximum=0;
    for(int i=0;i<size;i++)
    {
        if(y[i]>=maximum)
        {
            maximum=y[i];
        }
    }
    return maximum;
}
int min(int y[], int size)
{
    int minimum=9999999;
    for(int i=0;i<size;i++)
    {
        if(y[i]<=minimum)
        {
            minimum=y[i];
        }
    }
    return minimum;
}
float average(int y[], int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=y[i];
    }
    return (sum/size);
}
int mode(int y[], int size)
{
    //int minimum=min(y,size);
    int maximum=max(y,size);
    int counts[100]={0};
    for(int i=0;i<=maximum;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==y[j])
            {
            counts[i]++;
            }
        }
    }
    int l=max(counts,100);
    int k=0;
    for (;k<100;k++)
    {
        if(counts[k]==l)
        {
            break;
        }
    }
    return k;
}
int factors(int number, int ret[])
{
    int temp=number;
    int j=0;
    for(int i=2;i<=temp;i++)
    {
        if(temp%i==0)
        {
            ret[j]=i;
            temp=temp/i;
            j++;
            i=1;
        }
    }
    return(j);
}
