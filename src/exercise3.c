#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int array[10];
    int k = atoi(argv[1]);

    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 10; i++) {
        int x = (i - k) % 10;
        if(x < 0) {
            x += 10;
        }
        printf("%d ", array[x]);
    }

    return 0;
}
