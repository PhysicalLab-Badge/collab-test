#include <stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int add_numbers(int x, int y)
{
    int tmp;
    tmp = x + y;
    return tmp;
}

int main(void)
{
    int a, b, c, d;

    printf("Hello World!\n");
    printf("두 수를 입력하세요.\n");

    scanf("%d %d", &a, &b);
    c = add_numbers(a, b);

    if (c >= 10)
    {
        printf("10 이상\n");
    }
    else
    {
        printf("10 미만\n");
    }

    d = sub(a, b);

    if (d > 0)
    {
        printf("두 수의 차이는 양수입니다.\n");
    }
    else if (d == 0)
    {
        printf("두 수의 차이는 0입니다.\n");
    }
    else
    {
        printf("두 수의 차이는 음수입니다.\n");
    }

    return 0;
}
