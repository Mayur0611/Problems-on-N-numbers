/*
  4. Accept N numbers from user and display all such elements 
  which are  divisible by 3 and  5:
*/


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 3 == 0 && Arr[iCnt] % 5 == 0 )
        {
            printf("%d \t",Arr[iCnt]);
        }

    }
}

int main()
{
    int iLength = 0;
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

    Display(P,iLength);
    
    free(P);
    

    return 0;

}