#include <stdio.h>

    main() {
    int a, b, c, sum = 0;
    float avg = 0;
    
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = (a + b + c);
    avg = sum / 3;
    
    printf("Summation: %d\nAverage: %.2f", sum, avg);
    
    return 0;
    
}


