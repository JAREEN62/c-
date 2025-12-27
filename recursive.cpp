#include <iostream>

bool Prime(int n) 
{
    if (n <= 1) //checking if n is less than or equal to 1
    {
        return false;
    }
    if ( n == 2 || n == 3) //checking if n is 1 or 2 or 3  which are prime numbers.
    {
        return true;
    }
    if (n % 2 == 0)//checking if n is even numbers.
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)// starts the count from i = 3, because 1 and 2 are checked previously.
    {
        if (n % i == 0) //checking if i is a factor or not.
        {
            return false;
        }
    }
    return true;
}
int sumOfPrimesRecursive(int x, int current = 0) // calling a function sumOfPrimesRecursive
{
    if (current <= x) 
    {
        if (Prime(current)) //checks the current value is prime or not.
        {
            return current + sumOfPrimesRecursive(x, current + 1); // if TRUE adds the current value to the called recursive function
        } 
        else 
        {
            return sumOfPrimesRecursive(x, current + 1);//if FALSE just returns whith out adding the current value 
        }
    }
    return 0;
}
int main() 
{
    int X = 10;  // Replace with the desired value of X
    int result = sumOfPrimesRecursive(X);
    std::cout << "The sum of prime numbers from 0 to " << X << " is: " << result << std::endl;
    return 0;
}