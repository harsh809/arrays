#include <iostream>
using namespace std;

bool search(int arr[][4],int target,int rows,int colms){
    for(int rows=0;rows<3;rows++){
        for(int colms=0;colms<4;colms++){
            if(arr[rows][colms]==target){
                return 1;
            }
        }
    } 
    return 0;
}
int main(){
    int arr[3][4];
    int target;
    cout<<"enter target:";cin>>target;
    cout<<"Enter the array:";
    for(int rows=0;rows<3;rows++){
        for(int colms=0;colms<4;colms++){
            cin>>arr[rows][colms];
        }
    }
    for(int rows=0;rows<3;rows++){
        for(int colms=0;colms<4;colms++){
            cout<<arr[rows][colms]<<" ";
        }
        cout<<endl;
    }
    if(search(arr,target,3,4)){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }
    return 0;

}