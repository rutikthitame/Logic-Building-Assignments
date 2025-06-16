#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

bool Count(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            return TRUE;
        }  
        
    }
    return FALSE;
    
    

}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = FALSE;


    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

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

    bRet = Count(p,iSize);
    
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}