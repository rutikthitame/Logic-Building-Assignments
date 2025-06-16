#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            return TRUE;
        }  
        
    }
    return FALSE;
    
    

}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = FALSE;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    printf("Enetr the number : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element : %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else 
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}