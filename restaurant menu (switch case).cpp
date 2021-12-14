#include<stdio.h>
main()
{
char ch;
printf("enter 'B' for burger (Rs.150)\n");
printf("enter 'S' for sandwich (Rs.100)\n");
printf("enter 'F' for french fries (Rs.80)\n");
printf("enter 'P' for pizza (Rs.280)\n");
printf("enter a character");
scanf("%c",&ch);
switch(ch)
{
	case 'B':
		int b,burger_bill;
		printf("enter qty. of burger you want\n");
		scanf("%d",&b);
		burger_bill=150*b;
		printf("Total cost=%d ",burger_bill);
		break;
		
		case 'S':
		int s,sandwich_bill;
		printf("enter qty. of sandwich you want\n");
		scanf("%d",&s);
		sandwich_bill=100*s;
		printf("Total cost=%d ",sandwich_bill);
		break;
		
		case 'F':
		int f,fries_bill;
		printf("enter qty. of french fries you want\n");
		scanf("%d",&f);
		fries_bill=80*f;
		printf("Total cost=%d ",fries_bill);
		break;
		
		case 'P':
		int p,pizza_bill;
		printf("enter qty. of pizza slices you want\n");
		scanf("%d",&p);
		pizza_bill=280*f;
		printf("Total cost=%d ",pizza_bill);
		break;
		
		default:
			printf("Invalid choice");
		}
	}
	
		
		
		

