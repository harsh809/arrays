#include <iostream>
using namespace std;

int main(){
    int arr[3][4];
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
    int max = -1;
    int largest_row = 0;
    for(int rows=0;rows<3;rows++){
        int sum = 0;
        
        for(int colms=0;colms<4;colms++){
            sum = sum + arr[rows][colms];
        }
        if(max<sum){
            max = sum;
            largest_row = rows;
        }
        cout<<sum<<endl;
    }
    cout<<"Maximum row sum:"<<largest_row+1<<endl;
    cout<<endl;
}