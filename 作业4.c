/*
������ҵ4������3������û��0������������ϳ�������λ���������� 5��9��7�����975
���һ���޸�2023/10/28  15:12
BY:�������Ӣ��
*/

#define _CRT_SECURE_NO_WARNINGS//����IDE�����⣬��Ҫ������вſ����У�������޶��屨����ɾ��
#include <stdio.h>

int main()
{
    int a, b, c;
    int max, mid, min;

    printf("������������Ϊ0��������\n");
    scanf("%d %d %d", &a, &b, &c);

    // �ҵ����ֵ���м�ֵ����Сֵ
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

    // �ϳ�������λ����
    int out = max * 100 + mid * 10 + min;

    printf("�ϳɵ������λ����Ϊ��%d\n", out);

    return 0;
}