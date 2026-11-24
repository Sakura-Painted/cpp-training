#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // 初始化随机数字

    while (1)
    {
        int a = rand() % 100 + 1; // 目标数字，每局重新生成
        int b;
        int count = 0;
        string whether;

        // 内层循环控制一局游戏
        while (1) {
            cout << "请输入猜的数字：" << endl;
            cin >> b;
            count++;

            if (b == a)
            {
                cout << "猜对了，你猜了 " << count << " 次" << endl;
                cout << "是否再开一局(y/n) :" << endl;
                cin >> whether;
                
                if (whether == "y")
                {
                    break; // 跳出内层循环，回到外层 while 重新开局
                } else {
                    return 0; // 退出整个程序
                }
            } 
            else if (b < a)
            {
                cout << "猜小了" << endl;
            } 
            else if (b > a)
            {
                cout << "猜大了" << endl;
            }
        }
    }
    return 0;
}