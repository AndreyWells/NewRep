#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<string>> arr; //Создаем двумерный массив строк
ifstream in("test.txt"); // Читаем файл

void readFile() {
    string line;
    if (in.is_open()){
      while(getline(in, line)) {
           arr.push_back({{line[0]}, line.substr(2)}); // Добавляем в массив: 1 символ строки - "Ключ", 3 символ - "Значение"
      }
    }
}
void sortLines() {

}
void printLines() {

}
void writeFile() {

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    readFile();
    sortLines();
    printLines();
    writeFile();
    return 0;
}
