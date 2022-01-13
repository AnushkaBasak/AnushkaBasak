#include<stdio.h>
int find_lcm(int m ,int n );
int main()
{
	int lcm,m,n;
	printf("enter 2 numbers");
	scanf("%d%d",&m,&n);
    lcm=find_lcm(m,n);
    printf("the LCM=%d",lcm);
    return 0;
}
int find_lcm(int m ,int n )
{
	
	int gcd,lcm;
	for(int i=1;i<=m&&i<=n;i++)
	{
		if (m%i==0 && n%i==0)
		gcd=i;
	}
	lcm=(m*n)/gcd;
	
	return lcm;
}

	

