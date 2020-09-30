// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;
const double PI = 3.14;
void number_1() {
    ofstream out1("C:\\Users\\IVC1-5\\Desktop\\numbers.txt");
    int x;
    cout << "Enter 10 numbers\n ";
    for (int i = 0; i < 10; i++) {
        cin >> x;
        out1 << x << ' ';
    }
    out1.close();
    x = 0;
    ifstream in;
    in.open("C:\\Users\\IVC1-5\\Desktop\\numbers.txt");
    int sum = 0;
    while (!in.eof()) {
        in >> x;
        sum = sum + x;
    }
    cout << "Sum = " << sum-x;
}
int number_2(int num) {
    if (num > 0) {
        return 1;
    }
    else if (num == 0) {
        return 0;
    }
    else {
        return - 1;
    }
}

double rect_area(double l,double w) {
    return l * w;
}
double triangle_area(double h, double w) {
    return h * w * 0.5;
}
double circle_area(double r) {
    return r * r * PI;
}

int main()
{
    int L;
    cout << "Choose a task ";
    cin >> L;
    switch (L) {
    case(1):
        number_1(); break;
    case(2):
        int num;
        cout << "Enter a number ";
        cin >> num;
        cout << number_2(num) << "\n"; break;
    case(3):
        double h, w, r, l;
        cout << "Enter rectangle's width ";
        cin >> w;
        cout << "Enter rectangle's lenght ";
        cin >> l;
        cout << "Rectangle's area = " << rect_area(l, w)<<'\n';
        w = 0;
        cout << "Enter triangle's width ";
        cin >> w; 
        cout << "Enter triangle's height ";
        cin >> h;
        cout << "Triangle's area = " << triangle_area(h, w)<<'\n';
        cout << "Enter radius ";
        cin >> r;
        cout << "Circle's area = " << circle_area(r) << '\n';
        break;
    default: break;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
