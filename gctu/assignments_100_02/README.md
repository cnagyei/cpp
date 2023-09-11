## Project

A&B Company Ltd. is a company located in Accra that deals with spare parts of cars. The company sells various car parts such as ball joints, engines, gearbox, mirrors, light, etc. In a day the company is able to sell to its cherished customers more than 100 spare parts. You have been contracted as a developer to build a point of sale system for the company. Develop an algorithm that can handle all the sales of the company. Develop a simple C++ application to calculate the average sales for each day, week and month.

## Algorithm

> Step 1: Start
>
> Step 2: Declare variables for:
>   - `numberofDaysInWeek`
>   - `numberOfWeeksInMonth`
>   - `numberOfMonthsInYear`
>   - `totalSalesWeek`
>   - `totalSalesMonth`
>   - `totalSalesYear`
>   - `averageSalesDay`
>   - `averageSalesWeek`
>   - `averageSalesMonth`
>
> Step 3: Accept input for:
>
>   - `numberofDaysInWeek`
>   - `numberOfWeeksInMonth`
>   - `numberOfMonthsInYear`
>
> Step 4: Loop and accept input for each day in the week and add each input to `totalSalesWeek`
>
> Step 5: Loop and accept input for each day in the month and add each input to `totalSalesMonth`
>
> Step 6: Loop and accept input each month in the year and add each input to `totalSalesYear`
>
> Step 7: Calculate:
>
>   - `averageSalesDay = totalSalesWeek / numberOfDaysInWeek`
>   - `aveargeSalesWeek = totalSalesMonth / numberOfWeeksInMonth`
>   - `averageSalesMonth = totalSalesYear / numberofMonthsInYear`
>
> Step 8: Display output:
>
>   - `averageSalesDay`
>   - `aveargeSalesWeek`
>   - `aveargeSalesMonth`
>
> Step 9: Return `0` on success
>
> Step 10: Exit


## A Simple C++ Application

```cpp
#include <iostream>
using namespace std;

/*
* salesCalculator - calculates average sales for each day, week, and month
*
* Return: Void
*/
void salesCalculator()
{
    int numberofDaysInWeek, numberOfWeeksInMonth, numberOfMonthsInYear;
    double totalSalesWeek, totalSalesMonth, totalSalesYear;
    double averageSalesWeek, averageSalesMonth, averageSalesYear;

    cout << "Please enter number of days in the week" << endl;
    cin >> numberOfDaysInWeek;

}

/*
* main - entry point
*
* Return: 0 on success
*/
int main()
{
    salesCalculator();
    return (0);
}
```