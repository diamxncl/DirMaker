#include <iostream>
using namespace std;
int main () {
    int max;
    cout << "How many folders do you want to create: "; cin >> max;
    for (int in=1; in<=max; in++) {
    string i=to_string(in);
    string com1="mkdir folder_" + i;
    string com2="touch ./folder_"+i+"/file_"+i+".cpp";
    system(com1.c_str());
    system(com2.c_str());
    }
return 0;
}
