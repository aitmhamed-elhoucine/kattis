#include <stdio.h>

int main()
{
    long long a, b;
    while (scanf("%lld%lld", &a, &b) == 2) {
        (a>b) ? printf("%lld\n",a-b) : printf("%lld\n",b-a);
    }
    return 0;
}
