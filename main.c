#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Kullanıcıdan giriş al
    printf("İlk sayıyı girin: ");
    scanf("%lf", &num1);

    printf("İkinci sayıyı girin: ");
    scanf("%lf", &num2);

    printf("İşlemi seçin (+, -, *, /): ");
    scanf(" %c", &operator);

    // Temel hesaplamaları gerçekleştir
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Hata: Sıfıra bölme hatası!\n");
                return 1;  // Programı hata koduyla sonlandır
            }
            break;
        default:
            printf("Geçersiz operatör girdiniz!\n");
            return 1;  // Programı hata koduyla sonlandır
    }

    // Sonucu ekrana yazdır
    printf("Sonuç: %lf\n", result);

    return 0;  // Program başarıyla sonlandı
}
