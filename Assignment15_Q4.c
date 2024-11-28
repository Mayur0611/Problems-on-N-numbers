/*
   4. Accept N  number from user and accept Range, Display all elements 
       from that range:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("%d \t",Arr[iCnt]);     
        }
       
    }
    
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int *P = NULL;

    printf("Enter the number of elemnts:\n");
    scanf("%d",&iLength);

    P = (int *)malloc(iLength * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to allocate the Memory \n");
        return -1;

    }

    printf("Enter the %d Elements: \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the % d element :",iCnt + 1);
        scanf("%d", &P[iCnt]);
    }

    printf("%s -----------------------------------------------");

    printf("Enter the Starting Point: \n");
    scanf("%d",&iValue1);

    
    printf("Enter the End Point: \n");
    scanf("%d",&iValue2);

    Range(P, iLength, iValue1, iValue2);


   
    free(P);
    

    return 0;

}