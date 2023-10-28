/*
考核作业2：使用循环提取出1个字节大小的变量中的8位数
最后一次修改2023/10/28  13:01
BY:电控组赵英豪
*/

#define _CRT_SECURE_NO_WARNINGS//由于IDE的问题，需要加入此行才可运行，如出现无定义报错请删掉
#include <stdio.h>
#define u8 unsigned char  //个人习惯，在单片机中u8更容易知道空间大小，方便打出

int main()
{
    u8 byte = 0b11011010; // 定义一个字节大小的变量
    u8 bit; // 定义一个变量来存储每一位二进制数

    for (int i = 0; i < 8; i++)  // 循环8次，依次提取每一位二进制数    
    { 
        bit = byte & 0x01; // 取出最低位二进制数
        printf("%d", bit); // 输出该位二进制数
        byte = byte >> 1; // 将 byte 右移一位，准备提取下一位二进制数
    }
    return 0;
}