#include <stdio.h>
#include "multiply.h"

// review #2
static int s_multi_x = 15;
static int g_multi_y = 4;

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

    int multi_result = multiply(s_multi_x, g_multi_y);
    printf("Multi : %d\n", multi_result);

    return 0;
}
