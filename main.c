#include <stdio.h>
#include <stdbool.h>
#include "multiply.h"

// review #2
static int s_multi_x = 15;
static int g_multi_y = 4;

bool cmp(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
    int multi_result = multiply(s_multi_x, g_multi_y);
    printf("Multi : %d\n", multi_result);

    if (cmp(a, b) == true)
    {
        printf("a is greater than b! :)");
    }
    else
    {
        printf("a is not greater than b! :(");
    }

    return 0;
}
