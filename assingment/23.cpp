/*name- anshika rai
roll no.- 1706301
class:-b-19
question no.- 23*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}