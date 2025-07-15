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

     public void DisplayPerfect()
    {
        node temp = null;
        temp = first;
        int iCnt = 0,iSum = 0;


        while(temp != null)
        {
            iSum = 0;
            for( iCnt = 1;iCnt <= (temp.data/2); iCnt++)
            {
                if(temp.data % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
            if(iSum == temp.data)
            {
                System.out.println(temp.data+"\t");
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

        slobj.InsertFirst(51);
        slobj.InsertFirst(101);
        slobj.InsertFirst(28);
        slobj.InsertFirst(11);

        slobj.DisplayPerfect();
    }
    
}