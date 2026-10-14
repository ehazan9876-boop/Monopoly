#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int m,sum;
while(n--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b && a>c && a>d){
        m=a;
    }
    else if(b>a && b>c && b>d){
        m=b;
    }
    else if(c>a && c>b && c>d){
        m=c;
    }
    else{
        m=d;
    }
    sum = a+b+c+d-m;
    if(m>sum){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}




return 0;
}

