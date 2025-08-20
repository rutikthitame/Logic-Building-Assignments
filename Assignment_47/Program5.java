import java.util.*;

class Pattern
{
    private int iRow;
    private int iCol;
    private int Arr[][];

    Pattern(int iRow,int iCol)
    {
        this.iRow = iRow;
        this.iCol = iCol;
        this.Arr = new int[iRow][iCol]; 
    }

    public void Display()
    {
        int i = 0,j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                System.out.print((i+1)+"\t");
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

        System.out.println("Enter number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow, iCol);

        pobj.Display();

    }
    
}