#include<iostream>
#include<string.h>
using namespace std;
int callLength(string str,int n){
    int longest = 0;
    for (int i = 0; i <= n-2; i++){
        int l = i, r = i + 1;
        int lsum = 0, rsum = 0;
        while (r < n && l >= 0){
            lsum += str[l] - '0';
            rsum += str[r] - '0';
            if (lsum == rsum)
                longest = max(longest, r-l+1);
            l--;
            r++;
        }
    }
    return longest;
}
int main(){
    string str;
    cout<<"Enter numbers:";
    cin>>str;
    cout << "Length of the substring is " << callLength(str,str.length())<<endl;
    return 0;
}
