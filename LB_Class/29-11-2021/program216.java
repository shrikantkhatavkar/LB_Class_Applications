import java.util.*;

class Searching
{
	public boolean BinarySearch(int Arr[], int no)
	{
		int start, end, mid;

		start = 0;
		end = Arr.length-1;
		mid = (start + end)/2;
		
		while(start <= end)
		{
			if(Arr[mid] == no)
			{
				break;
			}
			else if (no > Arr[mid])
			{	
				start = mid +1;
			}
			else if(no < Arr[mid])
			{	
				end = mid -1;	
			}
			mid = (start + end)/2;
		}
		if(Arr[mid] == no)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}


class program216
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of aaray");
		int size = sobj.nextInt();

		int Arr[] = new int [size];

		System.out.println("Enter the elements");
		for(int i=0; i< Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		System.out.println("Enter the element to search");
		int value = sobj.nextInt();

		Searching obj = new Searching();
		boolean bret = obj.BinarySearch(Arr, value); 
		if(bret == true)
		{
			System.out.println("Elements is there");
		}
		else
		{

			System.out.println("Elements is not there");
		}
	}

}