/*
  2. Accept N numbers from user and return difference between frequency of
    even numbers and odd numbers:
*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCount = 0;
    int iOddCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++; 
        }
        else
        {
            iOddCount++;
        }

    }
    return iEvenCount - iOddCount;
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
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

    iRet = Frequency(P,iLength);

    printf("Result is %d",iRet);
    
    free(P);
    

    return 0;

}