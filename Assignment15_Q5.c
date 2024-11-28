/*
   5. Accept N  numbers from user and  return product 
      of all odd elements:
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProduct = 1;

    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
             
        }
       
    }
    return iProduct;
    
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
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

    iRet = Product(P, iLength);

    printf("Product is :  %d ",iRet);
   
    free(P);
    

    return 0;

}