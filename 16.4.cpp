#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    
    cin >> n;
    
    int* a = new int [n + n];
    
    
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    
    
    
    for (i = 0; i < n; i++){
        if (a[i] < 0){
            for (j = n; j > i + 1; j--){
                a[j] = a[j - 1];
            }
            n++;
            a[i + 1] = 0;
        }
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
 
    return 0;
}
