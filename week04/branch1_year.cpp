#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "请输入年：";
    cin >> year;

    
    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << year << "是闰年" << endl;
    }
    else
    {
        cout << year << "不是闰年" << endl;
    }

    return 0;
}