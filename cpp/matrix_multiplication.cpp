#include<iostream>
using namespace std;

int main()
{   
    int r1 ,c1, r2, c2,i,j,k,sum;
    cout<<"enter the row and column of 1st matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the row and column of 2nd matrix: ";
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"Multiplication  cannot be performed";
        return 0;
    }
    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];
    cout<<"enter element for 1st matrix"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"enter ["<<i+1<<","<<j+1<<"] element: ";
            cin>>A[i][j];
        }
    }

    cout<<"enter element for 2nd matrix "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"enter ["<<i+1<<","<<j+1<<"] element: ";
            cin>>B[i][j];
        }
    }

    cout<<"1st matrix is"<<endl;
    for(int i=0; i<r1;i++)
    {
        for(int j=0; j<c1;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"2nd matrix is"<<endl;
    for(int i=0; i<r2;i++)
    {
        for(int j=0; j<c2;j++)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++){
                sum=sum+A[i][k]*B[k][j];
                
            }
            C[i][j]=sum;
        }
    }

    cout<<"Output matrix is "<<endl;
    for(int i=0; i<r2;i++)
    {
        for(int j=0; j<c2;j++)
        {
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}

