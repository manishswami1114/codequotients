#include<bits/stdc++.h>
// Include headers as needed

using namespace std;
void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    // Write your code here
  int t;
  cin>>t;
  while(t--){
    int size;
    for(int i=0;i<=size;i++){
    cin>>arr[i];
    
  int N = sizeof(arr) / sizeof(arr[0]);
  int d;
  cin>>d;
    
  Rotate(arr, d, N);
  printArray(arr, N);
    }
  }
 

    // Return 0 to indicate normal termination
    return 0;
}
