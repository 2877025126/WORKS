/*
考核作业3：给一句英文，例如，将英文句子首字母大写，句子自己给自己出
最后一次修改2023/10/28  14:36
BY:电控组赵英豪
*/

#define _CRT_SECURE_NO_WARNINGS//由于IDE的问题，需要加入此行才可运行，如出现无定义报错请删掉
#include <stdio.h>

int main()
{
    char a[100];
    printf("请输入一个未大写的英文句子：\n");
    fgets(a,100,stdin);
    a[0] = a[0] - 32;
    printf("%s", a);
    return 0;
}