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

     public void SumDigit()
    {
        node temp = null;
        temp = first;
        int iSum = 0,iDigit = 0;


        while(temp != null)
        {
            iSum = 0;
            while(temp.data != 0)
            {
                iDigit = temp.data % 10;
                temp.data = temp.data / 10;
                iSum = iSum + iDigit;
            }
            System.out.println(iSum+"\t");
            temp = temp.next;
        }  
    }
}


public class Program5
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        slobj.SumDigit();
    }
    
}