#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    srand(time(0));
    int a = rand() % 100 + 1; // 目标数字，每局重新生成
    int b;

    while(1)
    {
        cout << "请输入猜的数字：" << endl;
        cin >> b;
        if( b == a )
        {
            cout << "猜对了" << endl;
            break;
        }
        else if( b < a )
        {
            cout <<"猜小了" << endl;
            continue;
        }
        else if( b > a )
        {
            cout << "猜大了" << endl;
            continue;
        }
    }
}