import java.util.*;

class Marvellous
{
	public void WordFrequency(String s)
	{
		String s2 = s.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[] = s2.split(" ");

		HashMap <String, Integer> hobj = new HashMap <String,Integer>();
		for(String str : Arr)
		{
			if(hobj.containsKey(str))
			{
				hobj.put(str,(hobj.get(str))+1);
			}
			else
			{
				hobj.put(str,1);
			}
		}
		Set <String> sobj = hobj.keySet();

		System.out.println("Duplicate words are : ");

		for(String word : sobj)
		{
			if(hobj.get(word) > 1)
			{
				System.out.println(word);
			}
		}

	}
}
class Program289
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string");
		String s = sobj.nextLine();

		Marvellous mobj = new Marvellous();
		mobj.WordFrequency(s);
	}
}






