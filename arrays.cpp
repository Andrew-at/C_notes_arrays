#include <iostream>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;
    
    cout<<sizeof(A)<<endl;
    
    cout<<A[0]<<endl;
    
    printf("%d\n",A[2]);
    
    return 0;
}

