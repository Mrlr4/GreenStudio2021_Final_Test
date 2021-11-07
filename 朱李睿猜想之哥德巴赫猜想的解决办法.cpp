// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m,k;
    
    for (n = 6; n <= 60; n=n+2)
    {
        cout << n << "=";
        for (m = 2; m < n; m++)
        {

            int flag1 = 1;
            int flag2 = 1;
            for (int i = 2; i<=sqrt(m); i++)
            {
                if (m % i == 0) flag1 = 0;
            }
            k = n - m;
            for (int j = 2; j <= sqrt(k); j++)
            {
                if (k % j== 0) flag2 = 0;
            }
            if (flag1 == 1 && flag2 == 1)
            {
                cout << m << "+" << k << endl;
                break;
            }
        }
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
