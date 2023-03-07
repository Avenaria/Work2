
#include "PhonBook.h"
#include<iostream>
#include<conio.h>
#include <iostream>
using namespace std;
 PhonBook Enter(PhonBook * x, int& n);
    PhonBook Add(PhonBook * x, int& n);
    PhonBook Dell(PhonBook * x, int& n);
    void ShowAll(PhonBook * x, int& n);



    int main()
    {


        PhonBook* Enter(PhonBook * x, int& n) {

            cout << "Введите колличество абонентов: ";
            cin >> n; cin.ignore();
            for (int i = 0; i < n; i++)
            {
                x[i].add();
            }
            return *x;
        }
    
    
    
    PhonBook Add(PhonBook * x, int& n)
    {
        cout << "Введите сколько абонентов нужно добавить: ";
        int m; cin >> m; cin.ignore();
        for (int i = n; i < m; i++)
        {
            x[i].add();
        }n = n + m;
    }
    PhonBook Dell(PhonBook * x, int& n)
    {
        cout << "Абонента под каким номером нужно удалить?\n";
        int del; cin >> del;
        for (int i = 0; i < n - 1; i++)
        {
            if (i >= del)
                x[i] = x[i + 1];
        } n = n - 1;
    }
    void ShowAll(PhonBook * x, int& n)
    {
        for (int i = 0; i < n; i++)
        {
            x[i].show();
        }
    }

}

