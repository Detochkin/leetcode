/*

7. Есть числа - палиндромы (читаются одинаково слева направо, а также справа налево, например, число 78387).

Сколько существует таких пятизначных чисел? *

*/

#include <stdio.h>

int	is_palindrome(int n)
{
	int digits[5];
	int i = 4;
	while (n)
	{
        digits[i--] = n % 10;
		n /= 10;
	}
	
	if (digits[0] != digits[4])
	    return (0);
    if (digits[1] != digits[3])
	    return (0);
	return (1);
}


int main()
{
    int counter = 0;
    int n = 10001;
    
    while (n < 100000)
    {
        if (is_palindrome(n))
        {
            printf("%d\n", n);
            counter++;
        }
        n++;
    }
    printf("Counter: %d\n", counter);
    return 0;
}
