#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<functional>
using namespace std;

/**
 * Returns the Hypotenuse of the two **legs**
 **/
double Length(double a,double b){
    return 2*sqrt(a*a-b*b/4);
}
int main(){
    int n;
    const double l=20,w=2;
    cin>>n;
    while(n--){
        int m;
        double R;
        cin>>m;
        vector<double> Rs;
        while(m--){
            cin>>R;
            Rs.push_back(R);
        }
        sort(Rs.begin(),Rs.end(),greater<double>());
        double sum=0;
        int i;
        for(i=0;i<Rs.size();i++){
            //Actually, cycling Rs
            //Determe if cover completely
            if(sum>1) break;
            sum+=Length(Rs[i],w);
        }
        cout<<i<<endl;
    }
    return 0;
}