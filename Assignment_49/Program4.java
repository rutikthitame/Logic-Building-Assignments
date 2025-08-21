import java.util.*;

class Pattern
{
    private String str;


    Pattern(String str)
    {
        this.str = str;
    }

    public void Display()
    {
        int i = 0,j = 0;
        char Arr[] = str.toCharArray();

        for(i = Arr.length; i > 0; i--)
        {
            for(j = 0; j < Arr.length;j++)
            {
                if(i > j)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println( );

        }
        for(i = 2; i <= Arr.length; i++)
        {
            for(j = 0; j < Arr.length;j++)
            {
                if(i > j)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println( );

        }
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern(str);

        pobj.Display();

    }
    
}