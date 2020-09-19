#include <iostream>
#include <windows.h>

// 定义64位整形
typedef __int64 int64_t;

// 获取系统的当前时间，单位微秒(us)
int64_t GetSysTimeMicros()
{
// 从1601年1月1日0:0:0:000到1970年1月1日0:0:0:000的时间(单位100ns)
#define EPOCHFILETIME   (116444736000000000UL)
    FILETIME ft;
    LARGE_INTEGER li;
    int64_t tt = 0;
    GetSystemTimeAsFileTime(&ft);
    li.LowPart = ft.dwLowDateTime;
    li.HighPart = ft.dwHighDateTime;
    // 从1970年1月1日0:0:0:000到现在的微秒数(UTC时间)
    tt = (li.QuadPart - EPOCHFILETIME) /10;
    return tt;
}
using namespace std;
long long func1(long long a){
    a+=(a-1)*2;
    a-=(a+1)*2;
    return a;
}
inline long long func2(long long a){
    a+=(a-1)*2;
    a-=(a+1)*2;
    return a;
}
int main(void){
    long long st,ed;
    st=GetSysTimeMicros();
    for(int i=0;i<100000000;i++){
        long long o=func1(1234);
    }
    ed=GetSysTimeMicros();
    cout<<"开始时间"<<st<<"，结束时间"<<ed<<"，用时"<<ed-st<<"微秒"<<endl;
    st=GetSysTimeMicros();
    for(int i=0;i<100000000;i++){
        long long o=func2(1234);
    }
    ed=GetSysTimeMicros();
    cout<<"开始时间"<<st<<"，结束时间"<<ed<<"，用时"<<ed-st<<"微秒";
    return 0;
}