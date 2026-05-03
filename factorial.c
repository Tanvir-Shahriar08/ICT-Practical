#include <stdio.h>

    main() {
    int n, f = 1, i = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    factorial:
    f = f * i;
    i++;
    
    if (i <= n) {
        goto factorial;
    } 
    else {
        printf("Factorial: %d", f);
    }
}

