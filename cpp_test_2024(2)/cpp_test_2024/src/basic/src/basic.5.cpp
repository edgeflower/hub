#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    // 基于当前系统的当前日期/时间
    time_t now = time(nullptr);
    cout << "1970到目前经过秒数:" << now << endl;

    // 把 now 转换为字符串形式
    string dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;

    // 基于当前系统的当前日期/时间
    tm *lctm = localtime(&now);
    dt = asctime(lctm);
    cout << "Local 日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构(GMT时间)
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;

    //计算两个时间差
    tm day;
    day.tm_year = 2017-1900;
    day.tm_mon = 9-1;
    day.tm_mday = 11-1;
    day.tm_sec = 0;
    day.tm_min = 0;
    day.tm_hour = 0;
    day.tm_wday = 0;
    day.tm_yday = 0;
    day.tm_isdst = 0;

    time_t birth = mktime(&day);
    time_t age = now - birth;
    if (age > 0)
    {
        tm* losttm = gmtime(&age);
        cout << "消逝的时光："
            << losttm->tm_year - 70 << "年"
            << losttm->tm_mon << "月"
            << losttm->tm_mday << "天"
            << endl;
    }
    return 0;
}