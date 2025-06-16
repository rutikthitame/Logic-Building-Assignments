#include <stdio.h>

void Display(int iNo)
{
    char *words[] = { "Zero", " one ", "Two", "Three", "Four", "Five","Six","Seven","Eight","Nine"};

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo >= 0 && iNo <= 9)
    {
        printf("%s\n",words[iNo]);
    }
    else
    {
        printf("Invalid Nuumber");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}