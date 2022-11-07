// question：
- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --- - - - -    - - -  - - -  --  - - - - - - - - - - - 

// 卡拉兹(Callatz)猜想：

// 对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3n+1) 砍掉一半。这样一直反复砍下去，最后一定在某一步得到 n=1。卡拉兹在 1950 年的世界数学家大会上公布了这个猜想，传说当时耶鲁大学师生齐动员，拼命想证明这个貌似很傻很天真的命题，结果闹得学生们无心学业，一心只证 (3n+1)，以至于有人说这是一个阴谋，卡拉兹是在蓄意延缓美国数学界教学与科研的进展……

// 我们今天的题目不是证明卡拉兹猜想，而是对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1？

// 输入格式：
// 每个测试输入包含 1 个测试用例，即给出正整数 n 的值。

// 输出格式：
// 输出从 n 计算到 1 需要的步数。

// 输入样例：
// 3
// 输出样例：
// 5
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -- - - - -  - - - -  - ------------------------------------------
//    思路：
// 由猜想可知，最终需要得到的是自然数1.因此程序的最终结束条件是输入任一自然数后，按照猜想中的运算方式进行计算，最终得到自然数1，在计算过程中，可以设置一个flag，用于计算步数（自动累加–每次数字进行运算后都自增1）。
// 因此程序使用while 循环做结构，结束条件为输入数字==1
// 循环体内判断数字为偶数还是奇数，然后进行对应的运算。并且设置flag++，用于计算步数。
//     ————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

//  C语言:
 
void Pat_B1001() {
    int n, step = 0;
    scanf("%d", &n);
    while (n != 1) {
        if (n % 2 == 0) n = n / 2;
        else n = (3 * n + 1) / 2;
        step++;
    }
    printf("%d\n", step);
}
// C++
#include "iostream"
using namespace std;
int flag=0; //用于计算步数
int num_in; //用于存储输入的数字
int num_out; //用于存储输出的数字
int main()
{
    cout<<"                 "<<"************卡拉兹猜想***************"<<endl;
    cout<<endl;
    cout<<"输入任一自然数(大于0的整数）:";
    cin>>num_in;
    if(num_in<0)
    {
        cout<<"输入错误！退出程序";
        return 0;
    }
    while(num_in!=1)
    {
        if(num_in%2==0)  //若输入数为偶数，则除以2之后的余数为0
        {
            num_in=num_in/2;
        }
        else            //输入数为奇数
        {
            num_in=(num_in*3+1)/2;
        }
        flag++;
    }
    cout<<endl;
    cout<<"输入数字使用卡拉兹猜想计算得到1，需要"<<flag<<"步";
    return 0;
}

// python代码
def collatz_conjecture(number):
    while number != 1:
        if number % 2 == 0:
            # 偶数
            number /= 2
            print(number)
        elif number % 2 == 1:
            # 奇数
            number = number * 3 + 1
            print(number)

collatz_conjecture(6)

//  Java代码
             import java.util.Scanner;
 
/*
 * 给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1？
 */
public class Callatz {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int number = sc.nextInt();
		int counts = 0;
		while (number != 1) {
			if (number % 2 == 0) {
				number /= 2;
				counts++;
			} else {
				number = (number * 3 + 1) / 2;
				counts++;
			}
		}
		System.out.println(counts);
		sc.close();
	}
}

