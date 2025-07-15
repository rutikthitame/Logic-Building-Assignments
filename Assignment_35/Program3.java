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

     public int AdditionEven()
    {
        node temp = null;
        temp = first;
        int iSum = 0;


        while(temp != null)
        {
            if(temp.data % 2 == 0)
            {
                iSum = iSum + temp.data;
            }
            
            temp = temp.next;
        }  
        return iSum;      
    }
}


public class Program3
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();
        int iRet = 0;

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        iRet = slobj.AdditionEven();
        System.out.println("Addition of all evven elments is : "+iRet);
    }
    
}