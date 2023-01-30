#include<bits/stdc++.h>
using namespace std;
int hallo(int arr){
    int num;
    int name;
    int c;
  arr hash[100]={0};
    for(int i=0;i<=10;i++){
        if(arr[i]==' '){
            hash[arr[i]]++;
        }
    }
    for(int i=0;i<=16;i++){
        if(hash[i]>=1){
            c++;
        }
        else if(hash[i]<1){
            name=max(c,num);
            c=0;
        }
    }

}
int main(){
    int n;
    cin>>n;
    double arr[10]={1,2,4,5,8,10,11,13,15};
    while (n--)
    {
        int a;
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        cout<<hallo(arr);
    }
    
}