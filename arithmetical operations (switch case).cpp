#include<stdio.h>
main()
{
	char ch;
	int a,b,o1,o2,o3,o4;
	
	printf("enter an arithmetical operator");
	scanf("%c",&ch);

	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
	 case '+':
			o1=a+b;
			printf("sum=%d",o1);
			break;
			
	 case '-':
				o2=a-b;
				printf("difference=%d",o2);
				break;
				
	 case '*':
					o3=a*b;
					printf("product=%d",o3);
				break;
				
	 case '/':
					o4=a/b;
					printf("quotient=%d",o4);
				break;
				
	default:
		printf("Invalid choice");
	}
}
		
				
				
			
			
		
			
		
	
