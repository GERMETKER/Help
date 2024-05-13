#include <iostream>
//#include "Character.hpp";
//#include "Header.hpp";
#include <fstream>
#include <string>
struct Human
{

};
struct Student
{

};
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    /*
    //Заполнение файла------------------------------------------
    std::string fileName;
    std::ofstream Spisok;
    std::cout << "Введите имя файла\n";
    std::string allName, name, lastName;
    std::cin >> fileName;
    Spisok.open(fileName);//! std::ofstream::app чтобы  не перезаписывался
    if (!Spisok.is_open())
    {
        std::cerr << "Error!\n";
    }
    else
    {
        std::cin.ignore(32000, '\n');//очищение cin !!!обязательно
        for (int i = 1; i < 5; i++)
        {
            std::cout << "Введите " << i << " полное имя\n";
            std::getline(std::cin, name, '\n');
            Spisok << name << i << "\n";
        }    
    }
    Spisok.close();
    */

    //Чтение файла----------------------------------------------
    std::ifstream fin;
    fin.open("myFile.txt");
    if (!fin.is_open())
    {
        std::cerr << "Error\n";
    }
    else
    {
        std::cout << "Open\n";
        char sym;
        std::string name;
        
        while (!fin.eof())//вывод
        {
            name = "";
            //fin >> name;
            std::getline(fin, name);
            std::cout << name << "\n";
        }
        /*
        while (fin.get(sym))//вывод всего файла по чарам
        {
            std::cout << sym;
        }
        */
    }
    fin.close();
    
    
    return 0;
}

