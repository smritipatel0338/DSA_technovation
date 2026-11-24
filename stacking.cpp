#include <iostream>
using namespace std;
 
int gcd_calc(int a,int b){
    if(b==0){
        return a;
    }

    return gcd_calc(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"GREATEST COMMON DIVISIOR OF "<<a<<" AND "<<b<<" is   "<<gcd_calc(a,b);
    return 0;

}