interface Drawable()
{
	void Draw()
}
class Rectangle implements Drawable
{
	System.out.println("Drawing Rectangle");
}
class Circle implements Drawable
{
	System.out.println("Drawing Circle");
}
class TestInterface1
{
	public static void main(String[] args)
	{
	Drawable d=new Drawable();
	d.Rectangle();
	d.Circle();
	}
}