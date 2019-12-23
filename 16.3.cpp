#include <iostream>
using namespace std;

int main()
{
    int n, i, max, min, index_max, index_min;
    
    
    max = INT_MIN;
    min = INT_MAX;
    cin >> n;
    
    int* a = new int [n + 2];
    
    
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    
    
    
    for (i = 0; i < n; i++){
        if (a[i] >= max){
            max = a[i];
            index_max = i;
        }
        if (a[i] <= min){
            min = a[i];
            index_min = i;
        }
    }
    
    for (i = n; i > index_max + 1; i--){
        a[i] = a[i - 1];
    }
    a[index_max + 1] = 0;
    
    if (index_min > index_max){
        index_min++;
    }
    for (i = n + 1; i > index_min; i--){
        a[i] = a[i - 1];
    }
    
    a[index_min] = 0;
    
    
    for (i = 0; i < n + 2; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    
    
    return 0;
}
