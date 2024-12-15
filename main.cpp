#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    /* Определение переменной: Переменная - именованная ссылка на ячейку(и) памяти компьютера.
    Ячейка(и) определена(ы) типом данных, областью памяти (постоянной или динамической), хранящимся внутри значением.*/

    /* типы данных (название, размер, макс, мин)*/
    cout << " void\t" << "size: " << 0 << "," << "\t" << "max: " << "-" << "," << "\t" << "min: " << "-" << endl;
    cout << " bool\t" << "size: " << sizeof(bool) << "," << "\t" << "max: " << true << "," << "\t" << "min: " << false << endl;
    cout << " float\t" << "size: " << sizeof(float) << "," << "\t" << "max: " << FLT_MAX << "," << "\t" << "min: " << (-1 * FLT_MAX) << endl;
    cout << " double\t" << "size: " << sizeof(double) << "," << "\t" << "max: " << DBL_MAX << "," << "\t" << "min: " << (-1 * DBL_MAX) << endl;
    cout << " signed char\t" << "size: " << sizeof(signed char) << "," << "\t" << "max: " << CHAR_MAX << "," << "\t" << "min: " << CHAR_MIN << endl;
    cout << " unsigned char\t" << "size: " << sizeof(unsigned char) << "," << "\t" << "max: " << UCHAR_MAX << "," << "\t" << "min: " << 0 << endl;
    cout << " short int\t" << "size: " << sizeof(short int) << "," << "\t" << "max: " << SHRT_MAX << "," << "\t" << "min: " << SHRT_MIN << endl;
    cout << " unsigned short int\t" << "size: " << sizeof(unsigned short int) << "," << "\t" << "max: " << USHRT_MAX << "," << "\t" << "min: " << 0 << endl;
    cout << " int\t" << "size: " << sizeof(int) << "," << "\t" << "max: " << INT_MAX << "," << "\t" << "min: " << INT_MIN << "\t" << endl;
    cout << " unsigned int\t" << "size: " << sizeof(unsigned int) << "," << "\t" << "max: " << UINT_MAX << "," << "\t" << "min: " << 0 << endl;
    cout << " long int\t" << "size: " << sizeof(long int) << "," << "\t" << "max: " << LONG_MAX << "," << "\t" << "min: " << LONG_MIN << endl;
    cout << " unsigned long int\t" << "size: " << sizeof(unsigned long int) << "," << "\t" << "max: " << ULONG_MAX << "," << "\t" << "min: " << 0 << endl;
    cout << " long long int\t" << "size: " << sizeof(long long int) << "," << "\t" << "max: " << LLONG_MAX << "," << "\t" << "min: " << LLONG_MIN << endl;
    cout << " unsigned long long int\t" << "size: " << sizeof(unsigned long long int) << "," << "\t" << "max: " << ULLONG_MAX << "," << "\t" << "min: " << 0 << endl;
    
    /* Примеры арифметических операций с типами данных*/
    cout << endl;
    int n = 5;
    int k = 2;
    cout << n << " * " << k << " = " << n * k << endl;
    
    cout << endl;
    double n1 = 5.5;
    double k1 = 1.5;
    cout << n1 << " + " << k1 << " = " << n1 + k1 << endl;
    
    cout << endl;
    bool n2 = false;
    bool k2 = true;
    cout << n2 << " + " << k2 << " = " << n2 + k2 << endl;

    return 0;
}