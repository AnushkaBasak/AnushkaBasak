#include<stdio.h>
main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	switch((ch>='A')&&(ch<='Z'))
	{
		case 1:
			printf("Entered letter is in UPPER CASE\n");
			ch=ch+32;
			printf("%c is corresponding lower case letter ",ch);
			break;
			
			case 0:
				printf("entered letter is in lower case\n");
				ch=ch-32;
					printf("%c is corresponding UPPER CASE letter ",ch);
			break;
			
			default:
				printf("It is not a letter");
			}
		}
		
				

