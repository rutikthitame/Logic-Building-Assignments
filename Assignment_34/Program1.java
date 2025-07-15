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

     public void SearchFirstOcc(int no)
    {
        node temp = null;
        temp = first;

        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iCount; iCnt++)
        {
            if(temp.data == no)
            {
                System.out.println("First occurance of "+no+" is at "+iCnt+" position");
            }
            temp = temp.next;

        }
    }
}


public class Program1 
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(101);
        slobj.InsertFirst(51);
        slobj.InsertFirst(21);
        slobj.InsertFirst(11);

        slobj.SearchFirstOcc(51);
    }
    
}