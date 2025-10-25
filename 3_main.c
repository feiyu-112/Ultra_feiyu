#include <stdio.h>

int main(){
    int a, b,result;
    char op;

    printf("请输入两个整数和一个运算符（格式：a b op）:");
    scanf("%d %d %c , &a, &b, &op");

    switch (op) {
        case '+':
            result = a + b;
            printf("%d\n", result);
            break;
        case'-':
            result = a - b;
            printf("%d\n", result);
            break;
        case '/':
            if (b !=0){
                result = a / b;
                printf("%d\n", result);
            }else{
                printf("错误：除数不能为 0\n");
            }
            break;
        default:
            printf("错误：请输入有效的运算字符（+、-、*、/） \n");    
    }
    return 0;
}
