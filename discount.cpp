#include <iostream>
using namespace std;

int getDiscount(int amount)
{
    float disAmount;
    if (amount >= 5000)
    {
        disAmount = amount - (20 / 100.0) * amount;
    }
    else if (2000 <= amount < 5000)
    {
        disAmount = amount - (10 / 100.0) * amount;
    }
    else
    {
        disAmount = amount - (5 / 100.0) * amount;
    }
    return disAmount;
}

int main()
{
    int amount;
    cout << "enter amount: ";
    cin >> amount;
    cout << "Price after discount: " << getDiscount(amount) << endl;
    return 0;
}