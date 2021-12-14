#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	switch((a>b)&&(a>c))
	{
		case 1:
			printf("First no. is maximum %d",a);
			break;
			
			case 0:
				switch(b>c)
				{
					case 1:
						printf("%d is maximum",b);
						break;
						
						case 0:
							printf("%d is maximum",c);
							break;
						}
						break;
						
						default:
							printf("All nos. are equal");
				}
	}
	
