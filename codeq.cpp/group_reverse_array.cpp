// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int arr[n];
//         int group=0;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         reverse(arr,n,group);

//     }
// }
// void reverse(int arr,int n,int group){
//     int i;
//     for(i=0;i<n;i+=group){
//         int l=i;
//         int r=min(i + group - 1, n - 1);
//         while(l < r)
//             swap(arr[l++], arr[r--]);
//     }
// }

#include <iostream>
using namespace std;
void reverse(int arr[], int n, int k)
{
	for (int i = 0; i < n; i += k)
	{
		int left = i;


		int right = min(i + k - 1, n - 1);


		while (left < right)
			swap(arr[left++], arr[right--]);

	}
}


// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
// 	int k = 3;

// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	reverse(arr, n, k);

// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";

// 	return 0;
// }
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
        reverse(arr,n,k);
        }
         return 0;

     }
