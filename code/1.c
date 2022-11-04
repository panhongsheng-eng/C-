//头文件
# include <stdio.h>



//主函数(在一个程序中只有一个main函数）
int main(){
        //定义变量a；
        int a;
        //定义变量b;
        int b;
        //scanf是输入函数
        //提醒用户输入：
        printf("please input two number:\n");
        scanf("%d%d",&a,&b);
        printf("a = %d b = %d\n",a,b);
        //printf是输出函数
        //printf("%d",a+b);
        int c   = a+b;
        printf("add is = %d\n",c);
        return 0;
}
