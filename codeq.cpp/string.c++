#include<bits/stdc++.h>
using namespace std;
bool isunique(string str){
    int given;
    cin>>given;
      for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] + str[j]== given) {
                return str[i],str[j];
            }
            else {
                return 0;
            }
        }
    }


}
int main(){
    int n;
    cin>>n;
    getchar();
    string str;
    while(n--){
        getline(cin,str);
        cout<<isunique(str);
    }
}

