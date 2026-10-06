#include <stdio.h>

int main() {
    int num, i;
    long long catalan = 1;

    printf("Enter n: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        catalan = catalan * (4 *i - 2) /(i +1);
    }

    printf("%lld\n", catalan);
    return 0;
}
