#include "teplov.h"
#include <cmath>
double fallSpeed(double t) {
    return 9.81 * t;
}
double fallHeight(double t) {
    return 9.81 * t * t / 2;
}
double fallTime(double h) {
    return sqrt(2 * h / 9.81);
}


