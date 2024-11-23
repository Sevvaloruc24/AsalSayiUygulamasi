#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d asal bir sayi degildir.\n", number);
        return 0;
    }

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            isPrime = 0; // Asal olmadigi tespit edildi
            break;
        }
    }

    if (isPrime) {
        printf("%d asal bir sayidir.\n", number);
    } else {
        printf("%d asal bir sayi degildir.\n", number);
    }

    return 0;
}

