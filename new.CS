using System;
public class program
{
	public static void Main()
	{
			 string str1;
			 char[] arr1;
			 int l,i;
			 l=0;
			 char ch;
       
		   	 Console.Write("Input the string : ");
		     str1 = Console.ReadLine();
		     l=str1.Length;
		     arr1 = str1.ToCharArray(0, l); 
        	 Console.Write("\n Upper Case, the string is : ");
			 for(i=0; i < l; i++)
			 {
				ch=arr1[i];
				Console.Write(Char.ToUpper(ch)); 
			 }
		     Console.Write("\n Lower Case, the string is : ");
			 for(i=0; i < l; i++)
			 {
				ch=arr1[i];
				Console.Write(Char.ToLower(ch)); 
			 }
		Console.Write("\n\n");    
   }
}
