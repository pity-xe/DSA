#include <iostream>
using namespace std;

int main()
{
    //INCREASING ARRAY SIZE
    // int *p, *q;
    // int i;
    // p =new int[5];
    // p[0]=1;p[1]=2;p[2]=5;p[3]=3;p[4]=8;

    

    // q = new int[10];
    // for (i=0;i<5;i++){
    //     q[i]=p[i];
    // }
    // delete []p; 
    // p=q;
    // q = nullptr;
    // for (i=0;i<5 ;i++){
    //     cout<<p[i]<<endl;
    // }

    //CREATING 2D ARRAY
    
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    int *B[3];
    int i,j;

    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout << A[i][j]<<" ";
        }
        cout<<endl;
    }

    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    for (i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout << B[i][j]<<" ";
        }
        cout<<endl;
    }

    // int **C[3];
    


    return 0;

}
