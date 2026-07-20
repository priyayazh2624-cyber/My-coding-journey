public class TestMultipleCatchBlock
{
	public static void main(String[] args)
	{
	 try
	    {
	    try
	    {
	    	int x;
	    	x=30/0;
	    }
	  
	 catch(ArithmeticException e)
	    {
	     System.out.println("Task1 completed ");
	    }
	    try
	    {
	    	int a[]=new int[5];
	    	a[10]=5;

	    }
	 catch(IndexOutOfBoundsException e)
	    {
	     System.out.println("Task2 completed ");
	    }
	  }
	  catch(Exception e)
	  {
	  	 System.out.println("Task handled ");
	  }
	}
}