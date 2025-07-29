import java.util.*;

class Matrix
{private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter elements of matrix");

        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void SwapRows(int Row,int Col)
    {
        int i = 0,j = 0,Old = 0;
        for(i = 0; i < Arr.length; i++)
        {
            
            for(j = 0; j < Arr.length; j++)
            {
                Old = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = Old;
            }
            i = i +1;
        }
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();

        }       
    }
}

public class Program5
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        int Row = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        int Col = sobj.nextInt();

        Matrix mobj = new Matrix(Row, Col);

        mobj.Accept();

        mobj.SwapRows( Row, Col);
        
    }


    
}