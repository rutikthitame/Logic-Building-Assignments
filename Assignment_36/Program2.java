class node
{
    public int data;
    public node next;
}
class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }
    public int Count()
    {
        return iCount;
    }

     public void DisplayPalindrome()
    {
        node temp = null;
        temp = first;
        int iRev = 0,iDigit = 0,iNo = 0;


        while(temp != null)
        {
            iRev = 0;
            iNo = temp.data;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = iRev * 10 + iDigit;
                iNo = iNo / 10;
            }
            if(iRev == temp.data)
            {
                System.out.print(temp.data+"\t");
            }
            temp = temp.next;
        }  
        System.out.println("\n");
    }
}


public class Program2
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(282);
        slobj.InsertFirst(11);

        slobj.DisplayPalindrome();
    }
    
}