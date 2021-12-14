#include<stdio.h>
main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
	    case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("It is a vowel");
			break;
			
			default:
				printf("It is a consonant");
		}
	}
	
