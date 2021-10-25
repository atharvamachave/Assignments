#include <stdio.h>
#define BASE 10 /* Constant */

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    printf("Enter any number: ");
    scanf("%lld", &num);

    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }

    n = num; 

    while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    printf("Frequency of each digit in %lld is: \n", num);
    for(i=0; i<BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}


/*

OUTPUT:

Enter any number: 114579
Frequency of each digit in 114579 is:
Frequency of 0 = 0
Frequency of 1 = 2
Frequency of 2 = 0
Frequency of 3 = 0
Frequency of 4 = 1
Frequency of 5 = 1
Frequency of 6 = 0
Frequency of 7 = 1
Frequency of 8 = 0
Frequency of 9 = 1


*/