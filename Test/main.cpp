#include<bits/stdc++.h>
using namespace std;
double a[1000001];
double Rand(long long MAX){
    long long a=(1ll*rand()*rand())%MAX;
    long long b=(1ll*rand()*rand())%MAX;
    double x=b;
    x=x/10000;
    double y=a;
    y+=x;
    return y;
}
int main(){
    srand(time(NULL));
    for(int i=1;i<=10;i++){
        string x="";
        if(i<10) x='0'+i;
        if(i==10) x="10";
        ofstream inp("test"+x+".inp");
        int n=1000000;
        inp<<n<<"\n";
        for(int i=1;i<=n;i++){
            if(rand()%2==0){
                a[i]=Rand(100000);
            }
            else{
                a[i]=-Rand(100000);
            }
        }
        if(i<=2){
            sort(a+1,a+1+n);
            if(i==2){
                reverse(a+1,a+1+n);
            }
        }
        for(int i=1;i<=n;i++){
            inp<<setprecision(10)<<a[i]<<" ";
        }
    }
}
