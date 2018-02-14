/*Name:- Anshika rai
	Roll no. 1706301
	Ques No.:- 11 */



#include<bits/stdc++.h>
using namespace std;

int dayNumber(int day, int month, int year)
{

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year -= month < 3;
    cout<<"year is"<< year;
    return ( year + year/4 - year/100 +
             year/400 + t[month-1] + day) % 7;
}

string getMonthName(int monthNumber)
{
    string months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"
                      };

    return (months[monthNumber-1]);
}


int numberOfDays (int monthNumber, int year)
{

    if (monthNumber == 1)
        return (31);

    if (monthNumber == 2)
    {
        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }

    if (monthNumber == 3)
        return (31);

    if (monthNumber == 4)
        return (30);

    if (monthNumber == 5)
        return (31);

    if (monthNumber == 6)
        return (30);

    if (monthNumber == 7)
        return (31);

    if (monthNumber == 8)
        return (31);

    if (monthNumber == 9)
        return (30);

    if (monthNumber == 10)
        return (31);

    if (monthNumber == 11)
        return (30);

    if (monthNumber == 12)
        return (31);
}


void printCalendar(int year, int month)
{
    cout<<"         Calendar - "<<year<<"\n\n";
    int days;

    int current = dayNumber (1, month, year);



        days = numberOfDays (month, year);


        cout<<"\n  ------------"<<getMonthName (month).c_str()<<"-------------\n";


        cout<<"  Mon  Tue  Wed  Thu  Fri  Sat  Sun\n";


        int k;
        for (k = 1; k<current; k++)
         cout<<"     ";
         k=k-1;

        for (int j = 1; j <= days; j++)
        {
            printf("%5d", j);

            if (++k>=7)
            {
                k = 0;
                printf("\n");
            }
        }



    return;
}

int main()
{
    int year, month;
    cout<<"enter the year and month \n";
    cin>>year>>month;
    printCalendar(year,month);

    return (0);
}
