#include <iostream>
#include <windows.h>

// ����64λ����
typedef __int64 int64_t;

// ��ȡϵͳ�ĵ�ǰʱ�䣬��λ΢��(us)
int64_t GetSysTimeMicros()
{
// ��1601��1��1��0:0:0:000��1970��1��1��0:0:0:000��ʱ��(��λ100ns)
#define EPOCHFILETIME   (116444736000000000UL)
    FILETIME ft;
    LARGE_INTEGER li;
    int64_t tt = 0;
    GetSystemTimeAsFileTime(&ft);
    li.LowPart = ft.dwLowDateTime;
    li.HighPart = ft.dwHighDateTime;
    // ��1970��1��1��0:0:0:000�����ڵ�΢����(UTCʱ��)
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
    cout<<"��ʼʱ��"<<st<<"������ʱ��"<<ed<<"����ʱ"<<ed-st<<"΢��"<<endl;
    st=GetSysTimeMicros();
    for(int i=0;i<100000000;i++){
        long long o=func2(1234);
    }
    ed=GetSysTimeMicros();
    cout<<"��ʼʱ��"<<st<<"������ʱ��"<<ed<<"����ʱ"<<ed-st<<"΢��";
    return 0;
}