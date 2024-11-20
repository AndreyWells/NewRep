#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<string>> arr; //Создаем двумерный массив строк
ifstream in("test.txt"); // Читаем файл

void readFile() {

}
void sortLines() {

}
void printLines() {
    for (auto& row : arr) {
        cout << row[1] << endl;
}}
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
