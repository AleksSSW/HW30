// HW30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

bool overwrite(std::string path, std::string str1);

int main()
{
    setlocale(LC_ALL, "Russian");
    
    //Задача 1.
    /* std::string path = "Writing.txt";
    std::ofstream out(path);
    out.open(path, std::ios::app);

    if (out.is_open()) {
        std::cout << "Файл открыт для записи.\n";
        std::string str;
        
        do {
            std::cout << "Введите строку:\n";
            std::getline(std::cin, str);
            out << str << '\n';
            

        } while (str != "end");
    }
    else
        std::cout << "Ошибка открытия файла";
    out.close();
    
    std::ifstream in;
    if (in.is_open()) {
        std::string line;
        while (std::getline(in, line)) {
            std::cout << line << std::endl;
        }
            
    }
    else
        std::cout << "Ошибка открытия файла";
    in.close();
    remove("Writing.txt");*/
    
    //Задача 2.
    std::string path1 = "file.txt";
    std::ofstream out(path1);
    std::string str1;
    out.open(path1, std::ios::app);
    if (out.is_open()) {
        std::string str;
        std::cout << "Введите строку:\n";
        std::getline(std::cin, str);
        out << str << '\n';
    }
    else
        std::cout << "Ошибка открытия файла!\n";
    overwrite(path1, str1);

    return 0;
}

bool overwrite(std::string path, std::string str1) {
    std::string path = "file.txt";
    std::ofstream out(path);
    out.open(path, std::ios::out);
    if (out.is_open()) {
        std::string str;
        std::cout << "Введите строку:\n";
        std::getline(std::cin, str);
        out << str << '\n';
    }
    else
        std::cout << "Ошибка открытия файла\n";
    std::ifstream in(path);
    if (in.is_open()) {
        std::string line;
        while (std::getline(in, line)) {
            std::cout << line << std::endl;
            return true;
        }

        std::cout << "Файла не существует";
        return false;
    }
}
