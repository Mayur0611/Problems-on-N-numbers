/*
   5. Accept N  number from user and accept one another number
     as No, return index of last occarance of that No:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iIndex = -1;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
             
        }
       
    }
    return iIndex;
    
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iNo = 0;
    int iRet = 0;
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

    printf("Enter the number that you want to check their Index: \n");
    scanf("%d",&iNo);

    iRet = LastOcc(P, iLength, iNo);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occarance of number is %d", iRet);
    }


   
    free(P);
    

    return 0;

}