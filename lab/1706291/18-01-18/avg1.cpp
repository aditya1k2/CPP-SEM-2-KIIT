#include<iostream>
#include<string>
using namespace std;
class getavg
{
  string name;
  int roll;
  int tota;
  static float avg;
public:
  void getinput();
  int total();

  static void findavg(float a){
    avg=a;
    cout<<"Average of the marks obtained by the students="<<avg<<"\n";
  }
};
float getavg::avg;
void getavg::getinput()
{
  cout<<"Enter the name of the student\n";
  cin.ignore();
  getline(cin,name);
  cout<<"Enter the roll number of the student\n";
  cin>>roll;
  cout<<"Enter the total marks obtained by student\n";
  cin>>tota;
}
int getavg::total(){
    return tota;

}
int main()
{
  int n,total1=0;
  float avg1=0;
  cout<<"Enter The Number Of Students\n";
  cin>>n;
  getavg a[n];
  for(int i=0;i<n;i++)
  {
    a[i].getinput();
  }
  for(int i=0;i<n;i++)
  {
    total1+=a[i].total();
  }
  avg1=total1/n;
  getavg::findavg(avg1);
}
