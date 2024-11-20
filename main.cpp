#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
void readFile() {

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
    vector<vector<string>> arr; //Создаем двумерный массив строк
    ifstream in("test.txt"); // Читаем файл
    readFile();
    sortLines();
    printLines();
    writeFile();
    return 0;
}
