#include <stdio.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            iSum++;
        }  
        
    }
    return iSum;
    
    

}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;


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

    iRet = Frequency(p,iSize,iValue);
    printf("Result is : %d ", iRet);

    free(p);

    return 0;
}