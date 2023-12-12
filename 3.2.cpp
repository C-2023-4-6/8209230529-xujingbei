#include<iostream>
using namespace std;
bool is_prime(int n) {
    if (n == 1) { 
        return false;
    }
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && i != n) {
            return false;
            break;           
        }
        else if (i == n) {
            return true;
        }
    }
}
int main() {
    int n = 1;
    for (int i = 1;; i++) {
        
        
            if (is_prime(i) == 1) {
                cout << i << " ";
                if (n % 10 == 0)
                {
                    cout << endl;
                }
                n++;
                if (n > 200)
                {
                    break;
                }
            }
            
       
        
    }     
    return 0;
}