#include <stdio.h>

    main() {
    int n, s = 0, i = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    do {
        s = s + i;
        i++;
    } 
    while (i <= n);
    
    printf("Summation: %d", s);
}

