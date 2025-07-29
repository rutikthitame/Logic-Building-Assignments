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

    public int Frequency(int Row,int Col,int iNo)
    {
        int i = 0,j = 0,iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }
}

public class Program2
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

        System.out.println("Enter the Number : ");
        int iNo = sobj.nextInt();

        Matrix mobj = new Matrix(Row, Col);

        mobj.Accept();

        iRet = mobj.Frequency( Row, Col,iNo);
        System.out.println("Frequency is : "+iRet);

    }


    
}