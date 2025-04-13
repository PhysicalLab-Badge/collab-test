#include <stdio.h>

int add_numbers(int x, int y)
{
    int tmp;
    tmp = x + y;
    return tmp;
}

int main(void)
{
    int a, b, c;

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

    return 0;
}