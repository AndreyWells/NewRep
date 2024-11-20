#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
vector<vector<string>> arr; //Создаем двумерный массив строк
ifstream in("test.txt"); // Читаем файл

void readFile() {

}
void sortLines() {

}
void printLines() {
    for (auto& row : arr) { //Выводим "значения" по "ключам" после сортировки
        cout << row[1] << endl;
}}
void writeFile() {
    stringstream sstream;
    for (int i = 0; i < arr.size(); i++) {
        sstream << arr[i][0] << " " << arr[i][1] << endl;
    }
    ofstream out_file("output.txt", ios::binary);
    out_file.imbue(locale(""));
    string data = sstream.str();
    out_file.write(data.c_str(), data.size());
    out_file.close();
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
