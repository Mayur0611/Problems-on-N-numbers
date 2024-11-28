/*
   5. Accept N  number from user and accept one another number
     as No, check whether No is present or not:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iNo = 0;
    bool bRet = false;
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

    printf("Enter the number that you want to check : \n");
    scanf("%d",&iNo);

    bRet = Check(P, iLength, iNo);

    if(bRet == true)
    {
        printf(" %d is present",iNo);

    }
    else
    {
        printf("%d is Absent", iNo);
    }
    
    free(P);
    

    return 0;

}