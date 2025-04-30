// Визначаємо формулу для обчислення відстані між двома точками
#define DISTANCE(x1, y1, x2, y2) sqrt(pow((x2) - (x1), 2) + pow((y2) - (y1), 2))

#include <stdio.h>
#include <math.h>

int main() {
    system("chcp 65001");
    int N;
    printf("Введіть кількість точок: ");
    scanf("%d", &N);
    
    if (N < 2) {
        printf("Потрібно щонайменше 2 точки для обчислення відстаней.\n");
        return 1;
    }
    
    double points[N][2]; // Масив для зберігання координат точок
    
    // Введення координат точок
    for (int i = 0; i < N; i++) {
        printf("Введіть координати точки %d (x y): ", i + 1);
        scanf("%lf %lf", &points[i][0], &points[i][1]);
    }
    
    // Обчислення та виведення відстаней між сусідніми точками
    printf("\nВідстані між сусідніми точками:\n");
    for (int i = 0; i < N - 1; i++) {
        double dist = DISTANCE(points[i][0], points[i][1], 
                             points[i+1][0], points[i+1][1]);
        printf("Відстань між точкою %d (%.2f, %.2f) і точкою %d (%.2f, %.2f): %.2f\n",
               i+1, points[i][0], points[i][1], 
               i+2, points[i+1][0], points[i+1][1], dist);
    }
    
    return 0;
}