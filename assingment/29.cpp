/* Name:- Harshit Raj
	Roll No.:-1706325
	Ques No.:- 29 */
#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"enter the order of matrix: ";
    cin>>m>>n;
    cout<<"required matrix is:\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                cout<<"1\t";
            }
            else if(i==j)
            {
                cout<<"0\t";
            }
            else
            {
                cout<<"-1\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}
