#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cin>>input; // input number
    cout<<input<<endl; // print number

    string str;
    getline(cin, str, 'i'); // i가 입력올때까지 입력받음
    getline(cin, str, '\n'); // 한줄 입력받기
    cout<<str<<endl;

    return 0;
}