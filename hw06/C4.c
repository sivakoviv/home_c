#include <stdio.h>

int f(int);
 
int main()
{
	int x;
	int curr_value = 0;
	int max_value = 0;
	int flag_first = 1;
	
	// Если 0, цикл сразу завершится
	while (scanf("%d", &x) == 1 && x != 0) {
		curr_value = f(x);
		
		if(flag_first == 1)
		{
			 max_value = curr_value;
			 flag_first = 0;
		}
		if(curr_value > max_value) {
             max_value = curr_value;
        }
	}
	
	// Выводим результат, только если мы обработали хотя бы одно число
	if (flag_first == 0) {
		printf("%d", max_value);
	}
	
	return 0;
}

int f(int x)
{
	if(x >= -2 && x < 2) return x*x;
	if(x >= 2) return x*x+4*x+5; 
	return 4; // Все остальные случаи — это x < -2, else if не нужен
}
