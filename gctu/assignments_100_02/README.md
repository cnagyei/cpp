|||
|--|--|
|Name|Caleb Nana Agyei|
|Index Number|4235230042
|Programme|BSc. Computer Science (Evening)|

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
>   - iterator `i`
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
    int numberOfDaysInWeek, numberOfDaysInMonth, numberOfWeeksInMonth, numberOfMonthsInYear;
    double totalSalesWeek = 0, totalSalesMonth = 0, totalSalesYear = 0;
    double averageSalesDay, averageSalesWeek, averageSalesMonth;
    double tempSalesWeek, tempSalesMonth, tempSalesYear;
    int i;

    printf("Data Entry\n==========\n");
    cout << "Please enter number of days in the week!" << endl;
    cin >> numberOfDaysInWeek;

    cout << "Please enter number of days in month!" << endl;
    cin >> numberOfDaysInMonth;

    cout << "Please enter number of weeks in month!" << endl;
    cin >> numberOfWeeksInMonth;

    cout << "Please enter number of months in year!" << endl;
    cin >> numberOfMonthsInYear;

    printf("\nDaily Sales\n===========\n");
    // Loop and accept daily sales for each day
    for (i = 0; i < numberOfDaysInWeek; i++)
    {
        printf("Enter sales for day %d in the week \n", (i + 1));
        cin >> tempSalesWeek;
        totalSalesWeek += tempSalesWeek;
    }

    printf("\nMonthly Sales\n=============\n");
    // Loop and accept daily sales for the month
    for (i = 0; i < numberOfDaysInMonth; i++)
    {
        printf("Enter sales for day %d in the month\n", (i + 1));
        cin >> tempSalesMonth;
        totalSalesMonth += tempSalesMonth;
    }

    printf("\nAnnual Sales\n============\n");
    // Loop and accept monthly sales for the year
    for (i = 0; i < numberOfMonthsInYear; i++)
    {
        printf("Enter sales for month %d in the year\n", (i + 1));
        cin >> tempSalesYear;
        totalSalesYear += tempSalesYear;
    }

    printf("\nCalculating average sales for each DAY...\n");
    printf("=========================================\n");
    // Calculate average sales for each day
    averageSalesDay = totalSalesWeek / numberOfDaysInWeek;
    printf("Total average sales for each day: GHC %.2f\n\n", averageSalesDay);

    printf("\nCalculating average sales for each WEEK...\n");
    printf("==========================================\n");
    // Calculate average sales for the week
    averageSalesWeek = totalSalesMonth / numberOfWeeksInMonth;
    printf("Total average sales for each week: GHC %.2f\n\n", averageSalesWeek);

    printf("\nCalculating average sales for each MONTH...\n");
    printf("===========================================\n");
    // Calculate average sales for the month
    averageSalesMonth = totalSalesYear / numberOfMonthsInYear;
    printf("Total average sales for each month: GHC %.2f\n\n", averageSalesMonth);
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