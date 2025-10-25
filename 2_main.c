#include <stdio.h>

int main() {
    int score;
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);
    
    if (score < 0 || score > 100) {
        printf("输入的成绩无效，请输入0-100之间的整数。\n");
    }
    // 从高分到低分判断等级
    else if (score >= 90) {
        printf("A\n");
    }
    else if (score >= 80) {
        printf("B\n");
    }
    else if (score >= 70) {
        printf("C\n");
    }
    else if (score >= 60) {
        printf("D\n");
    }
    else {
        printf("E\n");
    }
    
    return 0;
}
