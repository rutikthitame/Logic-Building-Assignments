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

    void Accept()
    {
        int i = 0,j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("ENetr the elements :");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0,j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println( );
        }
    }

    public void Trace()
    {
        int i = 0,j = 0;
        double iSum = 0,Normal = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                if(i == j)
                {
                    iSum += Arr[i][j];
                }
            }
            System.out.println( );
        }

        Normal = Math.sqrt(iSum);
        System.out.println("Normal of the Matrix is : "+Normal);
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows  : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number Columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);

        pobj.Accept();

        pobj.Display();

        pobj.Trace();

    }
    
}