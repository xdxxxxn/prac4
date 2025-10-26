#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int array[10];
    int x = atoi(argv[1]);
    int k = atoi(argv[2]);

    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 9; i > k; i--) {
        array[i] = array[i - 1];
    }

    array[k] = x;

    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
