/*
  Accept N number from user and return difference between summation
  of even elements and summation of odd elements:
*/


#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iSize)
{
    int iEvenSum = 0;
    int iOddSum = 0;
    int iCnt = 0;

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Number of elements");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements \n",iLength);
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element  %d : ",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iLength);

    printf("Result is %d", iRet);

    free(p);
    

    return 0;

}