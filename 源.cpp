#define _CRT_SECURE_NO_WARNINGS
#pragma Warning(disable :6031)
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*printf,scanf,puts,if else,switch case default,……*/
int main(int argc, char** argv)
{
    int a;
    int b;
    int score;
    //printf函数支持格式化与非格式化输出//
    printf("贱人喜欢小刘\n");
    //这是非格式化输出，就是原样输出，双引号里面为字符串常量//
    printf("贱人想对小刘说%d\n", 52 * 10);
    //这是格式化输出，双引号里面为格式化字符串，%d为转化说明//
    puts("KK有洁癖，删了小刘的QQ");
    //puts函数只能非格式化输出且自动换行//
    printf("输入666才能继续:\n");
    scanf("%d", &a);
    //scanf函数只能格式化输入//
    printf("%d\n", a);
    if (a == 666)
        puts("KK不屑\a");
    //嗯……\n为换行符，\a为响铃，等都叫转义字符//
    else puts("KK还是不屑\a");
    //if函数格式就是这样,有必要还可以添加声明，但是那就要用大括号了//
    puts("玩个有意思的，来给小刘打个分");
    puts("简单点，0代表不ok，1代表ok");
    scanf("%d", &b);
    switch (b * 1) {
    case 0: puts("你在放屁");                           break;
    case 1: puts("也还行吧");                           break;
    default: puts("叫你妈输入0和1，不会听人话，sb吧");   break;
    }
    puts("来猜猜我给小刘几分");
    do {
        puts("从1到10自己猜");
        scanf("%d", &score);
        if (score <= 6)
            puts("怎么会呢？");
        else if (score >= 8)
            puts("当然不会这高呀，我又不是舔狗");
        else if (score = 7)
            puts("就是这样的啦");
    } while (score != 7);
    //真的烦，他妈的，这格式要求有一点高，但是正确的也好看//
    while (a-- > 0) {


        printf("%d\n", a);
    }


    return 0;
}