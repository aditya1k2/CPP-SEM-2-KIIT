/* Name:- Harshit Raj
	Roll No.:-1706325
	Ques No.:- 14 */
#include<iostream>
using namespace std;
int main()
{
    int m,n;
     cout<<"Enter the order of the matrix:- \n";
    cin>>m;
    cin>>n;
    int a[m][n],b[m];
    int c=0;
    int location=0;


    cout<<"Enter the elements of array:- \n";
    for( int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the "<<i<<" "<<j<<" Element:- ";
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                c++;
            }
        }
        b[i]=c;
        c=0;
    }

     for(int i=0;i<m;i++)
    {
        cout<<"Number of 1 in  row "<<i<<": "<<b[i]<<"\n";
    }

    int maximum=b[0];
     for(int i=0;i<m;i++)
    {
        if(b[i]>maximum)
            {
            maximum=b[i];
            location=i;
            }

    }
    cout<<"The row with maximum number of 1 is : "<<location;
    return 0;
}
