#include<iostream>
#include<cmath>

using namespace std;

int main(void){
    cout<<"请依次输入：镜头光圈值 焦距 对焦距离(mm，后同) 焦外物体的物距 传感器对角线长度"<<endl;
    cout<<"传感器对角线长度：全画幅43.3,apsc28.4,m43 21.6,1英寸16"<<endl;
    while(true){
        //需要获取的量：对焦距离 焦外物体的物距 镜头焦距 镜头光圈值 传感器对角线长度
        double Fnumber,focal_length,uA,uB,sensor_diagonal;
        cin>>Fnumber>>focal_length>>uA>>uB>>sensor_diagonal;
        double deltaRelative=(uB-uA)*pow(focal_length,2)/(uB*(uA-focal_length)*Fnumber*sensor_diagonal);
        cout<<"弥散圆直径占传感器对角线的："<<deltaRelative<<endl<<endl;
    }
    return 0;
}