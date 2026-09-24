// Командный проект. Группа ПИ-52.
// Команда: Теплов (в. 30, техлид), Прохоренков (в. 74), Козлов (в. 7).

#include <iostream>
#include <windows.h>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "prokhorenkov.h"
#include "teplov.h"
// #include "kozlov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int choice;
    double a;
    double t, h;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
        cout << "1. Найти скорость падения\n";
        cout << "2. Найти высоту падения\n";
        cout << "3. Найти время падения\n";
        cout << "4. Гектары -> m2\n";
        cout << "5. m2 -> гектары\n";
        cout << "6. Гектары -> сотки\n";

        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice; 

        switch (choice) {
            // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
            case 1:
                cout << "Введите время t: ";
                cin >> t;
                cout << "Скорость v = " << fallSpeed(t) << "\n";
                break;
            case 2:
                cout << "Введите время t: ";
                cin >> t;
                cout << "Высота h = " << fallHeight(t) << "\n";
                break;
            case 3:
                cout << "Введите высоту h: ";
                cin >> h;
                cout << "Время падения t = " << fallTime(h) << "\n";
                break;
            case 4:
                cout << "Введите площадь в гектарах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " гектаров = " << haToM2(a) << " м2\n";
                break;
            case 5:
                cout << "Введите площадь в квадратных метрах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " м2 = " << m2ToHa(a) << " гектаров\n";
                break;
            case 6:
                cout << "Введите площадь в гектарах: ";
                cin >> a;
                if (a < 0) {
                    cout << "Площадь не может быть отрицательной.\n";
                    break;
                }
                cout << a << " гектаров = " << haToSotka(a) << " соток\n";
                break;
        
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }

        } while (choice != 0);
    return 0;
}
