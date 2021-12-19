#include <iostream>

using namespace std;

int main() 
{
    int n, tmp;
    n = 11;
    int arr[n] = { 41, 42, 66, 87, 86, 77, 38, 35, 55, 22, 32 };
  
    for (int i = 0; i < n; i++) 
    {
       cout << arr[i] << " ";
    }
   cout <<endl;
  
    for (int i = 0; i < n/2; i++) 
    {
    tmp = arr [i];
    arr [i] = arr [n-i-1];
    arr [n-i-1]= tmp;
    }
  
  for (int i = 0; i < n; i++) 
    {
       cout << arr[i] << " ";
    }
   cout <<endl;
      
    return 0;
}
