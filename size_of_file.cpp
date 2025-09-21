#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("example.txt")
    file.seekg(0, ios::end);    // перемещаем указателль на конец файла
    int size = file.tellg();    // получаем текущую позицию (размер)
    cout << "The size of yhe file is " << size << " bytes." << endl;
    return 0;
}