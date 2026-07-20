import java.util.Scanner;
class Shop
{
	public static void main(String args[])
	{
	int amount,discount;
	Scanner s=new Scanner(System.in);
	System.out.println("enter the amount");
	amount=s.nextInt();
	if(amount>=1500)
	{
		discount=amount*30/100;
	}
	else if(amount>=1000)
	{
		discount=amount*20/100;
	}
	else if(amount>=500)
	{
		discount=amount*10/100;
	}
	else 
	{
		discount=amount*0/100;
	}
	System.out.println("discount="+discount);

	}
	
}