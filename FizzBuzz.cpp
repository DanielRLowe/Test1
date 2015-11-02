#include <iostream>
using namespace std;

int main()
{

    //The following program is the infamous "FizzBuzz" test that recruiters
    //give to aspiring programmers to weed out those who can't actually
    //program.  The idea is that you count from 1 to 100, substituting
    //"Fizz" if the number is divisible by 3, "Buzz" if the number
    //is divisible by 5, and "FizzBuzz" if divisible by both.
    
    for (int n=1; n<101; n++)
    {
        if (n%3==0 && n%5==0) cout << "FizzBuzz, ";
        else if (n%3==0) cout << "Fizz, ";
        else if (n%5==0) cout << "Buzz, ";
        else cout << n << ", ";
        if (n%10==0) cout << endl;
    }
    return 0;

}
