import java.util.Scanner;
class Array
{
	public static void main(String[]args)
	{
	    Scanner s=new Scanner(System.in);
	    int[] number=new int[5];
	    int sum=0;
	for(int i=0;i<5;i++)
	   {
	      System.out.println("enter a value:");
	      number[i]=s.nextInt();
	   }
	   for(int i=0;i<5;i++)
	   {
	   	sum+=number[i];
	   }

	
	   System.out.println(sum);
	}


}