#include <iostream>

using namespace std;

int main()
{
    int *p, *q;
    int i;
    
    // malloc allocates memory dynamically from the heap
    p=(int *)malloc(5*sizeof(int));
    
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    
    // allocates memory dynamically to array of size 10
    q=(int *)malloc(10*sizeof(int));
    
    // q[i] set to p[i]
    for(i=0;i<5;i++)
        q[i]=p[i];
    
    free(p);

    p=q;
    q=NULL;
    
    // allocates q values to p, de-allocates memory from q
    // values are printed using *pointer* p
    for(i=0;i<5;i++)
        printf("%d \n", p[i]);
    
    return 0;
}