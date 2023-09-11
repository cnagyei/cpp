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
> Step 2: Call `main` function
>
> Step 3: Call `salesCalculator` function
>
> Step 4: Declare variables of type `int` for:
>
>   - `numberofDaysInWeek`
>   - `numberOfDaysInMonth`
>   - `numberOfWeeksInMonth`
>   - `numberOfMonthsInYear`
>
> Step 5: Declare variables of type `double` for:
>
>   - `averageSalesDay`
>   - `averageSalesWeek`
>   - `averageSalesMonth`
>
> Step 6: Initialize the following variables of type `double` to `0`:
>
>   - `totalSalesWeek = 0`
>   - `totalSalesMonth = 0`
>   - `totalSalesYear = 0`
>
> Step 7: Declare variables of type `double` to be used to hold values temporarily
>
> Step 8: Declare an `int` variable to be used as iterator `i`
>
> Step 9: Accept input for:
>
>   - `numberofDaysInWeek`
>   - `numberofDaysInMonth`
>   - `numberOfWeeksInMonth`
>   - `numberOfMonthsInYear`
>
> Step 10: Loop and accept input for each day in the week, store in `tempSalesWeek`, and add each input to `totalSalesWeek`
>
> Step 11: Loop and accept input for each day in the month, store in `tempSalesMonth`, and add each input to `totalSalesMonth`
>
> Step 12: Loop and accept input each month in the year, store in `tempSalesYear`, and add each input to `totalSalesYear`
>
> Step 13: Calculate:
>
>   - `averageSalesDay = totalSalesWeek / numberOfDaysInWeek`
>   - `aveargeSalesWeek = totalSalesMonth / numberOfWeeksInMonth`
>   - `averageSalesMonth = totalSalesYear / numberofMonthsInYear`
>
> Step 14: Display output:
>
>   - `averageSalesDay`
>   - `aveargeSalesWeek`
>   - `aveargeSalesMonth`
>
> Step 15: Return `0` on success
>
> Step 16: Exit


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
    double averageSalesDay, averageSalesWeek, averageSalesMonth;
    double totalSalesWeek = 0, totalSalesMonth = 0, totalSalesYear = 0;
    
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

    // Loop and accept daily sales for each day
    printf("\nDaily Sales\n===========\n");
    for (i = 0; i < numberOfDaysInWeek; i++)
    {
        printf("Enter sales for day %d in the week \n", (i + 1));
        cin >> tempSalesWeek;
        totalSalesWeek += tempSalesWeek;
    }

    // Loop and accept daily sales for the month
    printf("\nMonthly Sales\n=============\n");
    for (i = 0; i < numberOfDaysInMonth; i++)
    {
        printf("Enter sales for day %d in the month\n", (i + 1));
        cin >> tempSalesMonth;
        totalSalesMonth += tempSalesMonth;
    }

    // Loop and accept monthly sales for the year
    printf("\nAnnual Sales\n============\n");
    for (i = 0; i < numberOfMonthsInYear; i++)
    {
        printf("Enter sales for month %d in the year\n", (i + 1));
        cin >> tempSalesYear;
        totalSalesYear += tempSalesYear;
    }

    // Calculate average sales for each day
    printf("\nCalculating average sales for each DAY...\n");
    printf("=========================================\n");
    averageSalesDay = totalSalesWeek / numberOfDaysInWeek;
    printf("Total sales for the week: GHC %.2f\n", totalSalesWeek);
    printf("Number of days in the week: %d\n", numberOfDaysInWeek);
    printf("Total average sales for each day: GHC %.2f\n\n", averageSalesDay);

    // Calculate average sales for the week
    printf("\nCalculating average sales for each WEEK...\n");
    printf("==========================================\n");
    averageSalesWeek = totalSalesMonth / numberOfWeeksInMonth;
    printf("Total sales for the month: GHC %.2f\n", totalSalesMonth);
    printf("Number of weeks in the month: %d\n", numberOfWeeksInMonth);
    printf("Total average sales for each week: GHC %.2f\n\n", averageSalesWeek);

    // Calculate average sales for the month
    printf("\nCalculating average sales for each MONTH...\n");
    printf("===========================================\n");
    averageSalesMonth = totalSalesYear / numberOfMonthsInYear;
    printf("Total sales for the year: GHC %.2f\n", totalSalesYear);
    printf("Number of months in the year: %d\n", numberOfMonthsInYear);
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