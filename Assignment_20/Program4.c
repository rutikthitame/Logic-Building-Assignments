#include <stdio.h>


void Range(int Arr[], int iLength,int iStart, int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] <= iEnd) && (Arr[iCnt] >= iStart))
        {
            printf("%d\t",Arr[iCnt]);
        }  
        
    }    
    

}
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    printf("Enetr the starting point : ");
    scanf("%d",&iValue1);
    printf("Enetr the ending point : ");
    scanf("%d",&iValue2);

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

    Range(p,iSize,iValue1,iValue2);
    

    free(p);

    return 0;
}