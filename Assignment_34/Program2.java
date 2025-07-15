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

     public void SearchLastOcc(int no)
    {
        node temp = null;
        temp = first;
        int iPos = 0;

        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iCount; iCnt++)
        {
            if(temp.data == no)
            {
                iPos = iCnt;
            }
            temp = temp.next;
        }
        System.out.println("Last occurance of "+no+" is at "+iPos+" position");

    }
}


public class Program2 
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(51);
        slobj.InsertFirst(51);
        slobj.InsertFirst(21);
        slobj.InsertFirst(11);

        slobj.SearchLastOcc(51);
    }
    
}