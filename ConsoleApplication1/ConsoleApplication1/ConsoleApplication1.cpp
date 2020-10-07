// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const double PI = 3.14159265;
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
int convert(char n) {
    switch (n) {
    case'I':return 1;
        break;
    case 'V':return 5;
        break;
    case 'X': return 10;
        break;
    case 'L':return 50;
        break;
    case 'C':return 100;
        break;
    case 'D':return 500;
        break;
    case 'M':return 1000;
        break;
    default:return - 1;
        break;
    }
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
    case(4):
        cout << "* * * * * * * * --------------------------------------------------------\n"; 
        cout << " * * * * * * * *--------------------------------------------------------\n"; 
        cout << "* * * * * * * * --------------------------------------------------------\n";
        cout << " * * * * * * * *--------------------------------------------------------\n"; 
        cout << "* * * * * * * * --------------------------------------------------------\n"; 
        cout << " * * * * * * * *--------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        cout << "------------------------------------------------------------------------\n"; 
        break;
    case(6):
        string s;
        int c,m;
        cout << "Enter a line: ";
        cin >> s;
        break;
    default: break;
    }
}

