#include <stdio.h>

int main() {
    double m1[10][3];
    double m2[3][10];
    double res[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%lf", &m1[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            scanf("%lf", &m2[i][j]);
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            res[i][j] = 0;
            for(int x = 0; x < 3; x++) {
                res[i][j] += m1[i][x] * m2[x][j];
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%.3f", res[i][j]);
        }
    }

    return 0;
}
