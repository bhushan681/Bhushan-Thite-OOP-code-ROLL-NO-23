#include <iostream>
using namespace std;

class Sum {
    int n;       
    int sum;   
public:
    
    Sum() {
        n = 4;       
        sum = 0;   
    }

    
    Sum(const Sum &obj) {
        n = obj.n;   
        sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "sum = " << sum << endl;
    }
};

int main() {
    Sum s1;        
    Sum s2(s1);    
    return 0;
}
