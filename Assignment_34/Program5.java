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

     public int Minimum()
    {
        node temp = null;
        temp = first;
        int iMin = first.data;

        while(temp != null)
        {
            if(temp.data < iMin)
            {
                iMin = temp.data;
            }
            temp = temp.next;
        }        
        return iMin;
    }
}


public class Program5
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        int iRet = 0;

        slobj.InsertFirst(51);
        slobj.InsertFirst(101);
        slobj.InsertFirst(1);
        slobj.InsertFirst(11);

        iRet = slobj.Minimum();
        System.out.println("Smallest number from all elements  is : "+iRet);
    }
    
}