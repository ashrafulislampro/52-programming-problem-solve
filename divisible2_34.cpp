#include <iostream>
#include <cstdio>
using namespace std;

long long gcd(long long a, long long b)
{
    long long temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int T;
    scanf("%d", &T);

    long long a, b, c, i, lcm;
    while (T--)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        lcm = (a * b) / gcd(a, b);
       
        for(i = lcm; i <= c; i+=lcm){
            printf("%lld\n", i);
        }
        
        printf("\n");
    }
    return 0;
}