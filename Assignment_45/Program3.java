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

    public void ReverseCol(int Row,int Col)
    {
        int i = 0,j = 0,start = 0,end = 0,temp = 0;
        

        for(j = 0; j < Arr[i].length; j++)
        {
            start = 0;
            end = Arr.length-1;
            while(start < end)
            {
                temp = Arr[start][j];
                Arr[start][j] = Arr[end][j];
                Arr[end][j] = temp;
                start++;
                end--;
            }
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

public class Program3
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

        mobj.ReverseCol( Row, Col);
        
    }


    
}