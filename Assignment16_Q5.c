/* 
  5. Accept N numbers from user and Display summation of digits of 
      each number :

*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;
    int iCount = 0;
    int iSum =0;

   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = 0;
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d \t ",iSum);  
    }
    
}
int main()
{
    int iLength = 0;
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

    DigitsSum(P, iLength);

    

    return 0;
}