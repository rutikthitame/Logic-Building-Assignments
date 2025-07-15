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

     public void DisplaySmall()
    {
        node temp = null;
        temp = first;
        int iMin = 0,iDigit = 0,iNo = 0;


        while(temp != null)
        {
            iMin = 1;
            while(temp.data != 0)
            {
                iNo = iDigit;
                iDigit = temp.data % 10;
                temp.data = temp.data / 10;
                if(iNo > iDigit)
                {
                    iMin = iDigit;
                }
            }
            System.out.print(iMin+"\t");
            temp = temp.next;
        }  
        System.out.println("\n");
    }
}


public class Program4
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(282);
        slobj.InsertFirst(11);

        slobj.DisplaySmall();
    }
    
}