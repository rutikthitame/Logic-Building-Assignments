import java.util.*;

class Pattern
{
    private int iRow;
    private int iCol;


    Pattern(int iRow,int iCol)
    {
        this.iRow = iRow;
        this.iCol = iCol;
    }

    public void Display()
    {
        int i = 0,j = 0;

        for(i = iRow-1; i >= 0; i--)
        {
            for(j = 0; j < iCol;j++)
            {
                if(i == j)
                {
                    System.out.print("#\t");
                }
                else if(i > j)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("@\t");
                }
            }
            System.out.println( );
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows  : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number Columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);

        pobj.Display();

    }
    
}