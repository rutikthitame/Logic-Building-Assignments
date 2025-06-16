#include <stdio.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            iSum++;
        }  
        
    }
    return iSum;
    
    

}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;


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

    iRet = Frequency(p,iSize);
    printf("Result is : %d ", iRet);

    free(p);

    return 0;
}