#include<stdio.h>

 void accept(int [10][10],int,int);
 void mul(int [10][10],int [10][10],int,int,int);
 void display(int [10][10],int,int);
	
int main()
{
	int a[10][10],b[10][10];
	int r1,c1,r2,c2;
	
	printf("\n For 1st Matrix\t:");
	printf("\n Enter no of rows\t:");
	scanf("%d",&r1);
	
	printf("\n Enter no of columns\t:");
	scanf("%d",&c1);
	
	printf("\n For 2nd Matrix\t:");
	printf("\nEnter no of rows\t:");
	scanf("%d",&r2);
	
	printf("\nEnter no of columns\t:");
	scanf("%d",&c2);
	
	printf("\n Enter elements of 1st matrix\t:");
	accept(a,r1,c1);
	
	printf("\nEnter elements of 2nd matrix\t:");
	accept(b,r2,c2);
	if(c1==r2)
		mul(a,b,r1,c1,c2);
	else
		printf("Multiplication not possible");
}
	
 void accept(int a[10][10],int r,int c)
 {
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
 }

 void mul(int a[10][10],int b[10][10],int r1,int c1,int c2)
 {
	int i,j,v[10][10],k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			v[i][j]=0;
			for(k=0;k<c1;k++)
			{
				v[i][j]=v[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("Multiplication is as follows\t:\n");
	display(v,r1,c2);
}

void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

/*

OUTPUT:


 For 1st Matrix :
 Enter no of rows       :2 2

 Enter no of columns    :
 For 2nd Matrix :
Enter no of rows        :2 3

Enter no of columns     :
 Enter elements of 1st matrix   :1 2 3 4

Enter elements of 2nd matrix    :5 6 7 8 9 10
Multiplication is as follows    :
21      24      27
47      54      61

*/