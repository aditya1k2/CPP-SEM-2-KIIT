/* Name:- Aditya Kumar Gupta
		Roll No.:- 1706291
		Ques No.:-42 */
#include <iostream>
using namespace std;

int main()
{
    int n,i,temp;
    cout<<"enter the size of array\n";
    cin>>n;

    int arr[n];

	cout<<"enter the array:\n";

	for(i=0;i<n;i++)
	cin>>arr[i];

    	for(i=0;i<n-1;i++)
    	{
    	    if(arr[i]==arr[i+1])
    	    {
    	    arr[i]=2*arr[i];
    	    arr[i+1]=0;
    	    }
    	}

    	    int count=0;
    		for (i = 0; i < n; i++)
            if (arr[i] != 0)

            arr[count++] = arr[i];
           while (count < n)
        arr[count++] = 0;
        cout<<"\n";
    	for(i=0;i<n;i++)
     	cout<<arr[i]<<endl;

    return 0;
}
