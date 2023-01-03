package MarvellousString;
import java.util.*;

class Marvellous 
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, i = 0;	
		while(i <Arr.length)
		{
			if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u') )
			{
				iCnt++;
			}
			i++;
		}
		return iCnt;
	}
}
