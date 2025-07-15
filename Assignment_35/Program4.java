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

     public int SecMaximum()
    {
        node temp = null;
        temp = first;
        int iMax1 = 0,iMax2 = 0;


        while(temp != null)
        {
            if(temp.data > iMax1)
            {
                iMax2 = iMax1;
                iMax1 = temp.data;
            }
            else if(temp.data < iMax1 && temp.data > iMax2)
            {
                iMax2 = temp.data;
            }
            
            temp = temp.next;
        }  
        return iMax2;      
    }
}


public class Program4
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();
        int iRet = 0;

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        iRet = slobj.SecMaximum();
        System.out.println("Second Largest number is : "+iRet);
    }
    
}