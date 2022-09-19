#include <iostream>
using namespace std;
  
int main()
{
    int A[10], B[10], count, i;
      
    cout << "Enter number of elements= \n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i = 0; i < count; i++){
        cin >> A[i];
    }
    for(i = 0; i < count; i++){
        B[i] = A[count-i-1];
    }
    cout << "Reversed Array\n";
    for(i = 0; i < count; i++){
        cout << B[i] << " ";
    }
    return 0;
}
