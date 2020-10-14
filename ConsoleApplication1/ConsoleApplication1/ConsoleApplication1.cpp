// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ctime>
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

int rand(int si) {
    return(37 * si + 3) % 64;
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
    default:
        cout << "ERROR\n";
        return - 1;
        break;
    }
}

int conv(char a)
{
    if (a >= 'A' && a <= 'Z') {
        return 10 + int(a - 'A');
    }
    else if (a>='0' && a<='9') {
        return int(a - '0');
    }
    else {
        return -1;
    }
        
}
char revconv(int a)
{
    if (a >= 0 && a <= 9)
        return char('0' + a);
    else 
        return char('A' - 10 + a);
}
int main()
{
    setlocale(0, "");
    
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
        for (int i = 0; i < 3; i++) {
            cout << "* * * * * * * * --------------------------------------------------------\n";
            cout << " * * * * * * * *--------------------------------------------------------\n";
        }
        for (int i = 0; i < 7; i++) {
            cout << "------------------------------------------------------------------------\n";
        }
        /*cout << "* * * * * * * * --------------------------------------------------------\n";
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
        cout << "------------------------------------------------------------------------\n"; */
        break;
    case(6):
    {
        string s;
        int c = 0, m = 0;
        cin >> s;
        for (int i = s.length()-1 ; i >= 0; i--)
        {
            if (convert(s[i])==-1) {
                break;
            }
            int temp = convert(s[i]);
            if (temp >= m) {
                m = temp;
            }
            if (temp == m) {
                c += temp;
            }
            else {
                c -= temp;
            }
        }
        cout << c << '\n';
        break;
    }
    case(7):
        cout << rand(time(NULL))<<"\n";
        break;
    case(8):
    {
        float a[3][4] = {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}
        };
        float b[4][2] = {
            {1.2, 0.5},
            {2.8, 0.4},
            {5, 1},
            {2, 1.5}
        };
        float c[3][2] = {
            {0, 0},
            {0, 0},
            {0, 0}
        };
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                for (int s = 0; s < 4; s++) {
                    c[i][j] += a[i][s] * b[s][j];
                }
            }
        }
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++) {
                cout << c[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "2-ой больше всех, 3-ий меньше всех.\n";
        cout << "1-ый больше всех, 2-ой меньше всех\n";
        cout << c[0][0] + c[1][0] + c[2][0] << "\n";
        cout << c[0][1] + c[1][1] + c[2][1] << "\n";
        cout << c[0][0] + c[1][0] + c[2][0] + c[0][1] + c[1][1] + c[2][1] << "\n";
    }
    case(9):
    {
        string s1, s2;
        int n1, n2, c = 0;
        bool isError = 0;
        cin >> s1 >> n1 >> n2;  
        for (int i = 0; i < s1.length(); i++)
        {
            if (conv(s1[i])==-1) {
                cout << "ERROR\n";
                isError = 1;
                break;
            }
            c *= n1;
            c += conv(s1[i]);
        }
        cout << c << "\n";
        if (!isError) {
            while (c != 0)
            {
                s2=revconv(c % n2) + s2;
                c = c / n2;
            }
        }
        cout << s2;
    }
    default:break;
    }
}

