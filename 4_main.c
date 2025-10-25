#include <stdio.h>

int main() {

    int a=0, b=0, c=0;

    printf("请输入三条线段的长度（整数，用空格分隔）: ");

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }
    return 0;
}
