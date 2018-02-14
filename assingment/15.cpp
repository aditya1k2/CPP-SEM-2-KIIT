/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-15 */

#include<iostream>
using namespace std;
int main()
{
    int m,n,a[5][5];
    cout<<"Enter the order of the matrix:- \n";
    cin>>m>>n;
    cout<<"Enter the elements of the matrix:- \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter The "<<i+1<<"x"<<j+1<<" Element:-\n";
            cin>>a[i][j];
        }
    }
    cout<<"Lower triangular matrix is:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i>j)
            {
                cout<<a[i][j]<<"\t";
            }
            else
            {
                cout<<"0\t";
            }
        }
        cout<<"\n";
    }
    cout<<"Upper triangular matrix is:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||i<j)
            {
                cout<<a[i][j]<<"\t";
            }
            else
            {
                cout<<"0\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}
