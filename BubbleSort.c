#include <stdio.h>
#include<stdbool.h>

void main()
{
    bool swap;
    int n=5,j;
    int m;
    int arr[5]={58,89,71,35,6};
    int temp;
    
    do{
        swap=false;
        for(j=0;j<n;j++)
        {
            if (arr[j]>arr[j-1]);
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=false;
            }
        }
    }while(swap);
    
    for(m=0;m<4;m++)
        {
            printf("%d ",arr[m]);
        }
        
}
