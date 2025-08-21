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

    public void Interchange()
    {
        int i = 0,j = 0,temp = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp;

                temp = Arr[i][j];
                Arr[i][j] = Arr[i][j+1];
                Arr[i][j+1] = temp;
                j++;
            }
            i++;
            System.out.println( );
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println( );
        }
    }
}

class Program3
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

        pobj.Interchange();

    }
    
}