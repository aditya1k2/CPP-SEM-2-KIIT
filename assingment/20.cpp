/*name- anshika rai
roll no.- 1706301
question no.- 20*/

#include <iostream>

using namespace std;

int sum_contiguous(int A[], int n)
{
 int max_so_far=0;
 int max_ending_here=0;
 for(int i=0;i<n;i++)
 {
 max_ending_here=max_ending_here+A[i];
 max_ending_here=max_ending_here>0?max_ending_here:0;

max_so_far=max_so_far>max_ending_here?max_so_far:max_ending_here;
 }
 return max_so_far;
}
int main()
{
 int n,i;
 cout<<"\n Enter the size of the array: ";
 cin>>n;
 int A[n];
 cout<<"\n Enter the elements serially: ";
 for(i=0;i<n;i++)
 cin>>A[i];
 cout<<"\n\n The sum of contiguous sub-array with the largest sum is " <<sum_contiguous(A,n);

 return 0;
}
