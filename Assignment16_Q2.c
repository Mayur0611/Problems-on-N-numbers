/* 
  2. Accept N numbers from user and return the Smallest number:

*/

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;
    int *P = NULL;

    printf("Enter the Number of Elements:\n");
    scanf("%d",&iLength);

    P = (int *)malloc(iLength * sizeof(int));

    if(P == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the Elements: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }

    iRet = Minimum(P, iLength);

    printf("Smallest number is %d",iRet);

    return 0;
}