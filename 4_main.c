//202610411223
//宁哲

#include <stdio.h>

int main() {
    float score;

    if (scanf("%f", &score) != 1) {
        printf("输入无效\n");
        return 0;
    }

    if (score < 0 || score > 100) {
        printf("输入无效\n");
    } else if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}