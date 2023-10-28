/*
考核作业1：输入两个数，输出两个数的最大公约数
最后一次修改2023/10/28  12:03
BY:电控组赵英豪
*/

#define _CRT_SECURE_NO_WARNINGS//由于IDE的问题，需要加入此行才可运行，如出现无定义报错请删掉
#include <stdio.h>

int main() 
{
    int num1, num2, i, out;

    printf("请输入两个整数：\n");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num1 && i <= num2; i++) //在i<=输入俩数字的情况下进行循环，每循环一次，i的值加1
    {
        if (num1 % i == 0 && num2 % i == 0) //如果输入的俩数都能被i整除（这里使用与逻辑来判断），逻辑为真，则执行
        {
            out = i;//临时储存i的值，当循环完毕后，out的值将会被i的最大值覆盖，即二者的最大公因数
        }
    }

    printf("%d 和 %d 的最大公因数是 %d\n", num1, num2, out);

    return 0;
}