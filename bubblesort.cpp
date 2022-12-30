#include <stdio.h>


int insertarr(int arr[]){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    return n;
}
void bubble_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[50];
    int a=insertarr(arr);
    bubble_sort(arr,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}