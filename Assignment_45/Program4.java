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

    public boolean ChkIdentity(int Row,int Col)
    {
        int i = 0,j = 0;
        
        boolean bFlag = true;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] != 1)
                    {
                        bFlag = false;
                        return bFlag;
                    }
                    
                }
                else if(Arr[i][j] != 0)
                {
                    bFlag = false;
                    return bFlag;
                }
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
        return bFlag;    
    }
}

public class Program4
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        int Row = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        int Col = sobj.nextInt();

        Matrix mobj = new Matrix(Row, Col);

        mobj.Accept();

        bRet = mobj.ChkIdentity( Row, Col);
        if(bRet ==true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
        
    }


    
}