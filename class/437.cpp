#include<iostream>
using namespace std;
class student
{
private:
      int roll;
        int marks;
      public:

            student()
            {
                roll=0;
                  marks=0;
            }
              student(int r=0,int m=0)
                {
                      roll=r;
                        marks=m;
                }
                void show_data()
                {
                    cout<<roll<<marks;
                }
              };
              int main()
              {
                student s1;
                s1.show_data();
                student s2(1);
                s2.show_data();
              }
