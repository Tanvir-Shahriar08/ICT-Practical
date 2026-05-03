#include <stdio.h>

    main() {
    int n, f0 = 0, f1 = 1, f, i = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        f = f0 + f1;
        printf("%d ", f0);
        f0 = f1;
        f1 = f;
        i++;
    }
}


