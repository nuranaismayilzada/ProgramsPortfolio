#include <iostream>

using namespace std;

int main() {
    int day, month, year;

    cout << "Günü daxil edin: ";
    cin >> day;
    cout << "Ayı daxil edin: ";
    cin >> month;
    cout << "İli daxil edin: ";
    cin >> year;


    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Daxil etdiyiniz tarix düzgün deyil." << endl;
        return 1;
    }
    if (month == 2 && day > 29) {
        cout << "Fevralda 29 gündən çox ola bilməz." << endl;
        return 1;
    }
    if (month == 2 && day == 29 && !((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        cout << "Fevralda 29 gün yalnız artıq illərdə olur." << endl;
        return 1;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        cout << "Bu ayda 30 gündən çox ola bilməz." << endl;
        return 1;
    }

    int days = 0;

    for (int i = 1; i < year; i++) {
        days += ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) ? 366 : 365;
    }

    const int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i = 0; i < month - 1; i++) {
        days += daysInMonth[i];
        if (i == 1 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
            days++;
        }
    }

    days += day - 1;

    const string weekDays[7] = { "Bazar ertəsi", "Çərşənbə axşamı", "Çərşənbə", "Çərşənbə günü", "Cümə axşamı", "Cümə", "Şənbə" };
    string dayOfWeek = weekDays[days % 7];

    cout << "Daxil etdiyiniz tarix həftənin " << dayOfWeek << " günüdür." << endl;

    return 0;
}
