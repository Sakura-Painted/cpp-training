#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// 键盘输入姓名和年龄,输出"张三 今年 18 岁
void practice_1 ()
{
    string name;
    int age;    //初始化变量

    cout << "请输入姓名 : ";    //获取信息
    cin >> name;
    cout << "请输入年龄 : ";
    cin >> age;
    
    cout << name << "今年 " << age << "岁" << endl;
    
}


void practice_2 ()
{
    int a, b;       //初始化
    
    cout << "请输入第一个整数 : ";
    cin >> a ;
    cout << "请输入第二个整数 : ";
    cin >> b ;
    
    cout << "和: " << a + b << endl;
    cout << "差: " << a - b << endl;
    cout << "积: " << a * b << endl;
    
    // 判断除数为0
    if (b == 0){
        cout << "商: 除数不能为 0" << endl;   
    }

    else{
        cout << "商: " << fixed << setprecision(2) << a / b << endl;
    }

}

void practice_3 ()
{
    double c;    //初始化
    
    cout << " 请输入摄氏温度 ";
    cin >> c;
    
    // 使用 9.0 / 5.0 避免整数除法
    double f = c * 9.0 / 5.0 + 32.0;
    
    cout << "华氏温度为: " << f << endl;
    
}

// 调用函数
int main() {
    practice_1();
    practice_2();
    practice_3();
    return 0;
}