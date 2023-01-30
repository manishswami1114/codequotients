#include<bits/stdc++.h>
using namespace std;
bool isPangram(string str) {
  // Write your code here
  vector<bool> mark(26, false);
  
    
    int index;
  
    
    for (int i = 0; i < str.length(); i++) {
  
        
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
  
       
        else if ('a' <= str[i]
                 && str[i] <= 'z')
            index = str[i] - 'a';
  
       
        else
            continue;
  
        mark[index] = true;
    }
  
   
    for (int i = 0; i <= 25; i++)
        if (mark[i] == false)
            return (false);
  
   
    return (true);
}
int main()
{
  int t;
  cin>>t;
  getchar();
  string str;
  while(t--)
  {
    getline(cin, str);
    if(isPangram(str)){
      printf("YES");
    }else{
      printf("NO");
    }
    cout<<endl;
  }
}