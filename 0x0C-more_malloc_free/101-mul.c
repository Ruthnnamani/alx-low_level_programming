#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r)
{
	int i = 0, i1 = len_1 - 1;
	int i2, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (len_r));
	while (i < len_1)
	{
		mul_result = _calloc(sizeof(int), len_r);
		i2 = len_2 - 1, digit = (len_r - 1 - i);
		if (!is_digit(num1[i1]))
			return (NULL);
		carry = 0;
		while (i2 >= 0)
		{
			if (!is_digit(num2[i2]))
				return (NULL);
			product = (num1[i1] - '0') * (num2[i2] - '0');
			product += carry;
			mul_result[digit] += product % 10;
			carry = product / 10;
			digit--, i2--;
		}
		add_arrays(mul_result, sum_result, len_r);
		free(mul_result);
	    i++, i1--;
	}
	return (sum_result);
}
