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

     public void Reverse()
    {
        node temp = null;
        temp = first;
        int iRev = 0,iDigit = 0;


        while(temp != null)
        {
            iRev = 0;
            while(temp.data != 0)
            {
                iDigit = temp.data % 10;
                iRev = iRev * 10 + iDigit;
                temp.data = temp.data / 10;
            }
            System.out.print(" | "+iRev+" | ->");
            temp = temp.next;
        }  
        System.out.println("\n");
    }
}


public class Program1
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        slobj.Reverse();
    }
    
}