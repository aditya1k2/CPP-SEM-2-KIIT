#include<iostream>
using namespace std;
void multiply(int m,int n,int a[10][10],int p,int q,int b[10][10],int c[10][10])
{
  static int i=0,j=0,k=0;
  if(i>m)
  return;
else if(i<m)
{
  if(j<q)
  {
    if(k<n)
    {
      c[i][j]=c[i][j]+a[i][j]*b[k][j];
      k++;
      multiply(m,n,a,p,q,b,c);
    }
    k=0;
    j++;
    multiply(m,n,a,p,q,b,c);
  }
}}

int main()
{
  int m,n,a[10][10],p,q,b[10][10],c[10][10],i,j;
  cout<<"Enter The Order of the matrrix 1\n";
  cin>>m>>n;
  cout<<"Enter the order of the matrix 2\n";
  cin>>p>>q;

  if(n!=p)
  {
    cout<<"Multiplication is not possible\n";
  }
  else
  cout<<"Enter The values of matrix 1\n";
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Enter The value of the matrix 2\n";
  for(int i=0;i<p;i++)
  {
    for(int j=0;j<q;j++)
    {
      cin>>b[i][j];
    }
  }
  multiply(m,n,a,p,q,b,c);
  cout<<"Matrix After Multiplication is:-\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<c[i][j]<<"\t";
    }
    cout<<endl;
  }
}
