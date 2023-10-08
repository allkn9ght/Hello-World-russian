//Моя первая программа на C++
#include <iostream>
#include <windows.h>

int main()
{
    int age;
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char name[64];
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Введите ваш возраст: ";
    cin>> age;
    cout << "Привет, мир!" <<"\n";
    cout << "Меня зовут " <<name << " Мне " <<age << " Лет. И я пришел, встречайте!\n";
    cout << "Для выхода нажмите <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
