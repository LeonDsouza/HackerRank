#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,k;
    unsigned char input[100];
    scanf("%d",&n);
    scanf("%s",input);
    scanf("%d",&k);
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]>=65 && input[i]<=90)
        {
            input[i]=input[i]+(k%26);
            if(input[i]>90)
            {
                input[i]=input[i]-26;
            }
        }
        if(input[i]>=97 && input[i]<=122)
        {
            input[i]=input[i]+(k%26);
            if(input[i]>122)
            {
                input[i]=input[i]-26;
            }
        }
    }
    printf("%s",input);
    return 0;
}
