#include <bits/stdc++.h>
#include <cmath>

class Test{
public:
    Test(){};
    int getSum(int a, int b){
        while(a){
            int carry = (a&b) << 1; 
            b = a^b; 
            a = carry;
        }
        return b;
    }
};

int main(){
    Test t;
    cout << t.getSum(-3,3);
}
