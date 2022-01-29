/*
2. Четырехзначное число назовем "в тренде", если оно натуральное и в его записи есть только нечетные цифры. 
Сколько существует четырехзначных чисел “в тренде”? */

#include <stdio.h>

int	is_trendy(int n)
{
	while (n)
	{
        if ((n % 10) % 2 == 0)
            return (0);
		n /= 10;
	}
	return (1);
}

int is_prime(int n)
{
    int i = 3;
    
    while (i < n / 2)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    int counter = 0;
    int n = 1001;
    
    while (n < 10000)
    {
        if (is_prime(n))
            if (is_trendy(n))
                counter++;
        n += 2;
    }
    printf("Counter: %d\n", counter);
    return 0;
}
