//��� ������ ��������� �� C++
#include <iostream>
#include <windows.h>

int main()
{
    int age;
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[64];
    cout << "������� ���� ���: ";
    cin >> name;
    cout << "������� ��� �������: ";
    cin>> age;
    cout << "������, ���!" <<"\n";
    cout << "���� ����� " <<name << " ��� " <<age << " ���. � � ������, ����������!\n";
    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
