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

     public void DisplayProduct()
    {
        node temp = null;
        temp = first;
        int iMult = 1,iDigit = 0;


        while(temp != null)
        {
            iMult = 1;
            while(temp.data != 0)
            {
                iDigit = temp.data % 10;
                temp.data = temp.data / 10;
                if(iDigit == 0)
                {
                    iMult = iMult * 1;
                }
                else
                {
                    iMult = iMult * iDigit;
                }
            }
            System.out.print(iMult+"\t");
            temp = temp.next;
        }  
        System.out.println("\n");
    }
}


public class Program3
{
    public static void main(String A[])
    {
        SinglyLL slobj = new SinglyLL();

        slobj.InsertFirst(17);
        slobj.InsertFirst(102);
        slobj.InsertFirst(282);
        slobj.InsertFirst(11);

        slobj.DisplayProduct();
    }
    
}