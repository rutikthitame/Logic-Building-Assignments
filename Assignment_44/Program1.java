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

    public int Addition(int Row,int Col)
    {
        int i = 0,j = 0,iSum = 0;

        for(i = 0,j= 0;i < Arr.length;i++,j++)
        {
            iSum = iSum + Arr[i][j];
        }
        return iSum;
    }
}

public class Program1 
{
    public static void main(String A[])
    {
        int i = 0,j =0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        int Row = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        int Col = sobj.nextInt();

        Matrix mobj = new Matrix(Row, Col);

        mobj.Accept();

        iRet = mobj.Addition( Row, Col);
        System.out.println("Addition is : "+iRet);

    }


    
}