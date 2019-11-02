#include<iostream>

using namespace std;

char points[100][100]={};
int searched[100][100]={};
int dx[5]={-1,0,1,0},dy[5]={0,1,0,-1};
int n,x1,y1,x2,y2;
bool ok=false;
void search(int x,int y){
    if(x==x2&&y==y2){
        ok=true;
        return;
    }
    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=y+dy[i];
        //cout<<"NOW TRYING "<<xx<<","<<yy<<endl;
        if(xx>=0&&xx<n&&yy>=0&&yy<n&&points[xx][yy]!='#'&&searched[xx][yy]==0){
            searched[xx][yy]=1;
            //cout<<"NOW SEARCHING "<<xx<<","<<yy<<endl;
            search(xx,yy);
            searched[xx][yy]=0;
        }
    }
    return;
}
int main(void){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>points[i][j];
        }
    }
    cin>>x1>>y1>>x2>>y2;
    if(points[x1][y1]=='#'||points[x2][y2]=='#'){
        cout<<"no";
        return 0;
    }
    search(x1,y1);
    if(ok) cout<<"yes";
    else cout<<"no";
    return 0;
}