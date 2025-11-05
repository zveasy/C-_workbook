#include <iostream>
#include <cmath>    // for lround

using namespace std;

int main() {
    double usd;
    cout << "\nEnter an amount in USD (e.g., 1.36): ";
    cin >> usd;

    // Convert to cents safely
    long long cents = llround(usd * 100.0);

    const int DOLLAR = 100;
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;

    long long dollars = cents / DOLLAR;
    cents %= DOLLAR;
    long long quarters = cents / QUARTER;
    cents %= QUARTER;
    long long dimes = cents / DIME;
    cents %= DIME;
    long long nickels = cents / NICKEL;
    cents %= NICKEL;
    long long pennies = cents / PENNY;
    cents %= PENNY;

    cout << "\nYou entered $" << usd << endl;
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    // Total value check in cents:
    long long total_cents =
        dollars * DOLLAR + quarters * QUARTER + dimes * DIME + nickels * NICKEL + pennies * PENNY;
    cout << "\nTotal value in cents: " << total_cents << " cents" << endl;

    return 0;
}



//  If i have $1.00, how many quarters do i have?
//  1.00 / 0.25 = 4 quarters
//  1.00 / 0.10 = 10 dimes
//  1.00 / 0.05 = 20 nickels
//  1.00 / 0.01 = 100 pennies
//  1.00 / 1.00 = 1 dollar
// 0.25 + 0.25 + 0.25 + 0.25 = 1.00
// 0.10 + 0.10 + 0.10 + 0.10 + 0.10 + 0.10 + 0.10 + 0.10 + 0.10 + 0.10 = 1.00


// I can use a vector to store the values of the coins
// I can use a loop to iterate through the vector and calculate the total value of the coins
// I can use a loop to iterate through the vector and display the values of the coins
// I can use a loop to iterate through the vector and display the number of coins of each type
// I can use a loop to iterate through the vector and display the total value of the coins
// I can use a loop to iterate through the vector and display the total number of coins