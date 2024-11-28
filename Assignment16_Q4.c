/* 
  4. Accept N numbers from user and Display all such numbers which
    contains 3 digits in it:

*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0;
    int iCount = 0;

   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iCount = 0;
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo  % 10;
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d  ",Arr[iCnt]);
        }   
        
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

    Digits(P, iLength);

    

    return 0;
}