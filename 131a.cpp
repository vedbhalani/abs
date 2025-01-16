#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0;
    string w=s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z') c++;
    }
    if(c==s.length()){
        for(int i=0;i<s.length();i++){
       w[i]=tolower(s[i]);
    }
    }
    else if(c==s.length()-1){
        if(s[0]>='a'&&s[0]<='z'){
        w[0]=s[0]-32;
        for(int i=1;i<s.length();i++){
       w[i]=tolower(s[i]);
    }

    }
    }

    cout<<w<<endl;
    return 0;
}
