/* Name:- Harshit Raj
	Roll No.:-1706325
	Ques No.:- 49 */


#include<iostream>

using namespace std;

int maxDivide(int a, int b)
{
  while (a%b == 0)
   a = a/b;
  return a;
}
int isUgly(int no)
{
  no = maxDivide(no, 2);
  no = maxDivide(no, 3);
  no = maxDivide(no, 5);

  return (no == 1)? 1 : 0;
}


int getUglyNo(int n)
{
  int i = 1;
  int count = 1;

  while (n > count)
  {
    i++;
    if (isUgly(i))
      count++;
  }
  return i;
}

int main()
{
    int num;
    cout<<"enter the term \n";
    cin>>num;
    int no = getUglyNo(num);
    cout<<num<<"th ugly no. is "<< no;
    getchar();
    return 0;
}
