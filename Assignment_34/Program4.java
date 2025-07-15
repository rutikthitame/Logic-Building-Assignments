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

     public int Maximum()
    {
        node temp = null;
        temp = first;
        int iMax = 0;

        while(temp != null)
        {
            if(temp.data > iMax)
            {
                iMax = temp.data;
            }
            temp = temp.next;
        }        
        return iMax;
    }
}


public class Program4 
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        int iRet = 0;

        slobj.InsertFirst(51);
        slobj.InsertFirst(101);
        slobj.InsertFirst(21);
        slobj.InsertFirst(11);

        iRet = slobj.Maximum();
        System.out.println("Largest number from all elements  is : "+iRet);
    }
    
}