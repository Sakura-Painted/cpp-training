#include <iostream>
#include <string>
using namespace std;

int main()
{
    int time = 0;
    string entered_password;
    string password = "jsjkadlkf";
    do
    {
        if (time == 3)
        {
            cout << "Êä´í3´ÎËø¶¨";
            break;
        }
            
    cout <<"ÊäÈëÃÜÂë£º";
    cin >> entered_password;
    if (entered_password == password)
    {
        cout << "ÃÜÂëÕýÈ·";
        break;
    }
    
    else
    {
        time ++;
        cout << "ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë" << endl;
        continue;
    }

    }

    while(1);
}