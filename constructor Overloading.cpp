#include <iostream>
#include <cstdio>
using namespace std;

class date{
int day,month,year;
public:
    date(char *d);
    date(int m,int d,int y);
    void show_date();
};

date::date(char *d){
//sscanf reads formatted input from a string
sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
}

date::date(int m, int d, int y)
{
day = d;
month = m;
year = y;
}

void date::show_date()
{
cout << month << "/" << day;
cout << "/" << year << "\n";
}

int main()
{
    date ob1(12, 4, 2003), ob2("10/22/2003");
    ob1.show_date();
    ob2.show_date();
    cout << "Hello world!" << endl;
    return 0;
}
