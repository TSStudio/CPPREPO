#include<iostream>
using namespace std;
void Qsort(int arr[], int low, int high){
    if (high <= low) return;
    int i = low;
    int j = high + 1;
    int key = arr[low];
    while (true)
    {
        /*从左向右找比key大的值*/
        while (arr[++i] < key)
        {
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[--j] > key)
        {
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    Qsort(arr, low, j - 1);
    Qsort(arr, j + 1, high);
}
int main(){
    int arr[20]={23,34,45,54,74,16,47,43,64,24,57,68,79,59,84,63,52,58,24,89};
    int n;
    //输入top"n"
    cin>>n;
    Qsort(arr,0,20);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}