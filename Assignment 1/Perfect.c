#include <stdio.h>
	
int main()
{
    int i, j, end, sum;

    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Perfect numbers between 1 to %d: are\t:", end);
            
    for(i=1; i<=end; i++)
    {
        sum = 0;

        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
        if(sum == i)
        {
			printf("%d\t", i);
			
        }
    }

    return 0;
}

/*

OUTPUT:


Enter upper limit: 100
All Perfect numbers between 1 to 100: are       :6      28


*/