/*
  3 Accept N numbers from user and check whether that number contains 11in 
     it or not:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    bRet = Check(P,iLength);

    if(bRet == true)
    {
        printf("11 is present");

    }
    else
    {
        printf("11 is Absent");
    }
    
    free(P);
    

    return 0;

}