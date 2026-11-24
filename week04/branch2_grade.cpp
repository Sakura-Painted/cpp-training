#include <iostream>
using namespace std;

int main()
{
    int grade;    // 初始化
    cout << "请输入要排序的成绩：" << endl;
    cin >> grade;    //获取成绩


    if (grade >= 90)
    {
        cout << "A" << endl;
    }

    else if(grade >= 80)
    {
        cout << "B" << endl;
    }

    else if (grade >= 70)
    {
        cout << "C" << endl;
    }

    else if (grade >= 60)
    {
        cout << "D" << endl;
    }

    else
    {
        cout << "E" << endl;
    }

    return 0;
}
