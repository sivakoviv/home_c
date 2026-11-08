#include <stdio.h>

int is_prime(int n, int delitel);

int main() {
    int n;
    
    //scanf("%d", &n); 
    if (scanf("%d", &n) != 1)	return 1; 
    
    if (n <= 1)	printf("NO\n");
    else if (is_prime(n, 2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
int is_prime(int n, int delitel) {
//если квадрат делителя превысил n, значит у числа нет делителей, кроме 1 и самого себя.
    if (delitel * delitel > n) return 1; 
    
    // если n нацело делится на текущий делитель, значит найдена пара, и число является составным.
    if (n % delitel == 0) return 0;
    
    //проверяем следующий делитель (увеличиваем на 1)
    return is_prime(n, delitel + 1);
}
