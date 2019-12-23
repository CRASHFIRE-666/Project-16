#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, n, s;
    
    s = 0;
    cin >> n;
    
    int* a = new int [n];
    
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
   
    for (i = 1; i < n; i++){
        if (a[k] != a[i]){
            s++;
            a[s] = a[i];
        }
    }
    s++;
    for (i = 0; i < s; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
