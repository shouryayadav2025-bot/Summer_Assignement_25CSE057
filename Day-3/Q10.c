#include <stdio.h>
#include <math.h>


int main() {
    int start, end, i, count, prime, temp, inum;

    printf("Enter start and end value:\n");
    scanf("%d %d", &start, &end);

    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }
    
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        prime = 1;
        inum = sqrt(i);

        for (count = 2; count <= inum; count++) {
            if (i % count == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            printf("%d\t", i);
        }
    }

    return 0;
}