// half pyramid pattern with that value 
#include<stdio.h>
int main()
{
    int i,j,n;                                          // 1
    printf("enter the N :");                            // 1 2
    scanf("%d",&n);                                     // 1 2 3
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)   
        {
            printf("%d ",i);
        }
        printf("\n");
    }

 return 0;
}