#include <stdio.h>

int isPalindrome(char *str);

int main()
{
	char text[50]={0};
	char ch;	    
	int  cnt=0;  
	
	printf("\n Enter the String to check whether the string is pallindrome or not\t: ");
	while(1)
	{
		ch=getchar();
		
		if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
			text[cnt++]=ch;
		else
			break; 
	}
	text[cnt]='\0';	
	
	
	printf("\n Entered string is: %s\n",text);
	
	if(isPalindrome(text))
		printf("\n %s is a palindrome string\n",text);
	else
		printf("\n %s is not a palindrome string\n",text);
	
	return 0;
}


int isPalindrome(char *str)
{
	int length=0;
	int i,ret=1;
	
	while(str[length]!='\0') length++;
	 
    for(i=0; i<length; i++)
	{
		if((str[0+i] != str[(length-1)-i]))
		{
			ret=0;
			break;
		}			
	} 	
	return ret;
}


/*

OUTPUT:


 Enter the String to check whether the string is pallindrome or not     : Nitin

 Entered string is: Nitin

 Nitin is a palindrome string


 Enter the String to check whether the string is pallindrome or not     : language

 Entered string is: language

 language is not a palindrome string


*/