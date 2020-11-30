#include <stdio.h>
#include <stdlib.h>
void seive_of_eratosthene();
int main()
{
    int n;
    puts("Enter number: ");
    scanf("%d", &n);
    sieve_of_eratosthene(n);
}
void sieve_of_eratosthene(int n)
{
    short prime_bool[n+1];
    memset(prime_bool, 1, (n+1)*sizeof(prime_bool[0]));


    for (int p  = 2; p*p <= n; p++)
        if (prime_bool[p])
            for (int i = p*p; i <= n; i+=p)
                if (prime_bool[i] != 0) prime_bool[i] = 0;
    for (int i  = 2; i <= n; i++)
        if (prime_bool[i])
            printf("%d ", i);
}
