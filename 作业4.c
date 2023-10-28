/*
考核作业4：输入3个数（没有0），做到将其合成最大的三位整数。例如 5、9、7，输出975
最后一次修改2023/10/28  15:12
BY:电控组赵英豪
*/

#define _CRT_SECURE_NO_WARNINGS//由于IDE的问题，需要加入此行才可运行，如出现无定义报错请删掉
#include <stdio.h>

int main()
{
    int a, b, c;
    int max, mid, min;

    printf("请输入三个不为0的整数：\n");
    scanf("%d %d %d", &a, &b, &c);

    // 找到最大值、中间值和最小值
    if (a > b) 
    {
        if (a > c) 
        {
            max = a;
            if (b > c)
            {
                mid = b;
                min = c;
            }
            else 
            {
                mid = c;
                min = b;
            }
        }
        else 
        {
            max = c;
            mid = a;
            min = b;
        }
    }
    else 
    {
        if (b > c)
        {
            max = b;
            if (a > c) 
            {
                mid = a;
                min = c;
            }
            else 
            {
                mid = c;
                min = a;
            }
        }
        else 
        {
            max = c;
            mid = b;
            min = a;
        }
    }

    // 合成最大的三位整数
    int out = max * 100 + mid * 10 + min;

    printf("合成的最大三位整数为：%d\n", out);

    return 0;
}