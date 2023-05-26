#include<cmath>
string dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.
    int k;
    int j;
    int x;
    string weekdays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    if(month <= 2) {
        month+=12;
        year-=1;
    }
    /*
        Zeller's Theorem
        x = day of the week
        d = number of the day
        m = month number
        k = last two digits of year
        centuary = first two digits of the year
    */
    k = year%100;
    j = year/100;
    x = int(day + ((13*(month+1))/5) + k + (k/4) + j/4 + (5 * j));
    x = x%7;
    return weekdays[x];
    
}
