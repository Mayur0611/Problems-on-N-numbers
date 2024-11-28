/*
  5. Accept N  number from user and accept one another number
     as No, return frequency of No from it:
*/


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++; 
        }
    
    }
    return iCount;
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
    int No = 0;
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

    printf("Enter the number that you want to check: \n");
    scanf("%d",&No);

    iRet = Frequency(P,iLength,No);

    printf("Result is %d",iRet);
    
    free(P);
    

    return 0;

}