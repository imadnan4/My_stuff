#include <iostream>
using namespace std;

void mergeSort(int arr[],int s,int mid, int e){
    int B[e - s + 1];
    int i = s, k = s, j = mid + 1 ;
    while(i<=mid && j <=e){
    if(arr[i]<arr[j]){
    B[k] = arr[i];
    k++;
    i++;
    }
    else{
        B[k] = arr[j];
        k++;
        j++;
    }
    }
    while(i<=mid){
    B[k] = arr[i];
    i++;
    k++;
    }
     while(j<=e){
    B[k] = arr[j];
    j++;
    k++;
    }
    
    for(int i = s ; i <= e ; i ++){
        arr[i] = B[i];
    }

}

void ms(int arr[],int s, int e){
    if(s<e){
      int mid = (s+e)/2;
        ms(arr,s,mid);
        ms(arr,mid+1,e);
        mergeSort(arr,s,mid,e);
    }
    
}

void Display(int arr[],int s){
    for(int i =0 ; i < s; i ++)
    cout << arr[i] << " ";
    cout << endl;
}
int main(){   

    int arr[5] = {7,3,9,13,1};
    int size = sizeof(arr)/sizeof(int);
    Display(arr,size);
    ms(arr,0,size-1);
    Display(arr,size);

    return 0;
}