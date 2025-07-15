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

     public void DisplayPrime()
    {
        node temp = null;
        temp = first;
        int iCnt = 0, iCnt2 = 0;


        while(temp != null)
        {
            iCnt2 = 0;
            for( iCnt = 1;iCnt <= (temp.data/2); iCnt++)
            {
                if(temp.data % iCnt == 0)
                {
                    iCnt2++;
                }
            }
            if(iCnt2 == 1)
            {
                System.out.println(temp.data+" is perfect number");
            }
            
            temp = temp.next;
        }        
    }
}


public class Program2
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(101);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        slobj.DisplayPrime();
    }
    
}