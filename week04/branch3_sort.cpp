#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "请输入三个数字来排序（用逗号隔开）：" << endl;
    cin >> a,b,c;

    int flag = (a > b) * 4 + (a > c) * 2 + (b > c);

    switch (flag) {
        case 7: cout << a << " " << b << " " << c << endl;
        break;
        
        case 6: cout << a << " " << c << " " << b << endl;
        break;

        case 3: cout << b << " " << a << " " << c << endl;
        break;

        case 1: cout << b << " " << c << " " << a << endl;
        break;

        case 4: cout << c << " " << a << " " << b << endl;
        break;

        case 0: cout << c << " " << b << " " << a << endl;
        break;

        default: cout << "有相等的数" << endl;
    }

    return 0;
}