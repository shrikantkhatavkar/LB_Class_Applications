import java.util.*;

abstract class ArratX
{
	public int Arr[];

	public ArratX(int size)
	{
		Arr = new int[size];
	}
		
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the elements");
		for(int i = 0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Entered data is : ");
		for(int i = 0;i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}	
}



class program213
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		int size = sobj.nextInt();

		int Arr[] = new int[size];

		System.out.println("Enter the elements");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		System.out.println("Enterd data is : ");	
		for(int i = 0; i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}