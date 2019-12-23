#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, k, s, counter;
    
    cin >> n;
    
    int* a = new int [n];
    
    
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    
    k = 0;
    
    for (i = 0; i < n; i++){
        counter = 0;
        for (s = 0; s < n; s++){
            if (a[i] == a[s]){
                counter++;
            }
        }
        if (counter == 1 || counter > 2){
            a[k] = a[i];
            k++;
        }
    }
    
    
    for (i = 0; i < k; i++){
        cout << a[i] << " ";
    }
    cout <<endl;
    
    cout <<"Размер="<<k<<endl;
    
    
    return 0;
}
