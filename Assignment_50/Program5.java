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

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                if((i == j) || (i == 0) || (j == 0) || (i == iRow-1) || (j == iCol-1))
                {
                    System.out.print((j+1)+"\t");
                }
                else
                {
                    System.out.print(" \t");
                }
                
            }
            System.out.println( );
        }
    }
}

class Program5
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