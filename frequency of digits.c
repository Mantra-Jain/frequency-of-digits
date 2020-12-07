#include<stdio.h>
int main()
{
    long long num,temp;
    int digit,i;
    int freq[10];
    printf("Enter number:");
    scanf("%lld",&num);
    temp=num;
    for (i=0;i<10;i++)  //initialize array as 0
    {
        freq[i]=0;
    }
    do
    {
        digit=temp%10;
        temp=temp/10;
        freq[digit]++;
    }
    while(temp>0);
    printf("Frequency of each digit in %lld are: \n",num);
    for(i=0;i<10;i++)
    {
        if (freq[i]!=0)
        {
            printf("\tFrequency of %d is %d \n",i,freq[i]);
        }
    }
    return 0;
}
