#pragma once
using namespace std;
class PhonBook
{

    char fio[30];
    long long home_telephone;
    long long work_telephone;
    long long mobile_telephone;
    char more_info[30];

public:

    void add();
    void Dell();
    void show();
    void print_all();
    void search();

    PhonBook();
    ~PhonBook();

};








void PhonBook::add()
{
    cout << "������� ��� ��������\n";
    gets_s(fio);
    cout << "������� ����� ��������� ��������\n";
    cin >> home_telephone;
    cout << "������� ����� �������� ��������\n";
    cin >> work_telephone;
    cout << "������� ����� ���������� ��������\n";
    cin >> mobile_telephone;
    cout << "������� �������������� ����������\n";
    cin.ignore(); gets_s(more_info);
}
void PhonBook::show()
{
    cout << "��� ��������: "; puts(fio); cout << "\n";
    cout << "�������� �������: " << home_telephone << "\n";
    cout << "������� : " << work_telephone << "\n";
    cout << "���������: " << mobile_telephone << "\n";
    cout << "P. S. "; puts(more_info); cout << "\n";
}

PhonBook Enter(PhonBook* x, int& n)
{
    cout << "������� ����������� ���������: ";
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++)
    {
        x[i].add();
    }
    return *x;
}
PhonBook Add(PhonBook* x, int& n)
{
    cout << "������� ������� ��������� ����� ��������: ";
    int m; cin >> m; cin.ignore();
    for (int i = n; i < m; i++)
    {
        x[i].add();
    }n = n + m;
}
PhonBook Dell(PhonBook* x, int& n)
{
    cout << "�������� ��� ����� ������� ����� �������?\n";
    int del; cin >> del;
    for (int i = 0; i < n - 1; i++)
    {
        if (i >= del)
            x[i] = x[i + 1];
    } n = n - 1;
}
void ShowAll(PhonBook* x, int& n)
{
    for (int i = 0; i < n; i++)
    {
        x[i].show();
    }
}

PhonBook::PhonBook()
{
}


PhonBook::~PhonBook()
{
}



#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

PhonBook Enter(PhonBook* x, int& n);
PhonBook Add(PhonBook* x, int& n);
PhonBook Dell(PhonBook* x, int& n);
void ShowAll(PhonBook* x, int& n);

PhonBook Enter(PhonBook* x, int& n){
    cout << "������� ����������� ���������: ";
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++)
    {
        x[i].add();
    }
    return *x;
}
PhonBook Add(PhonBook* x, int& n)
{
    cout << "������� ������� ��������� ����� ��������: ";
    int m; cin >> m; cin.ignore();
    for (int i = n; i < m; i++)
    {
        x[i].add();
    }n = n + m;
}
PhonBook Dell(PhonBook* x, int& n)
{
    cout << "�������� ��� ����� ������� ����� �������?\n";
    int del; cin >> del;
    for (int i = 0; i < n - 1; i++)
    {
        if (i >= del)
            x[i] = x[i + 1];
    } n = n - 1;
}
void ShowAll(PhonBook* x, int& n)
{
    for (int i = 0; i < n; i++)
    {
        x[i].show();
    }
}

