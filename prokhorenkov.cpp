#include "prokhorenkov.h"
#include <cmath>

// Перевод гектаров в квадратные метры
double haToM2(double ha) {
    return ha * 10000;
}
// Перевод квадратных метров в гектары
double m2ToHa(double m2) {
    return m2 / 10000;
}
// Перевод гектаров в сотки
double haToSotka(double ha) {
    return ha * 100;
}
