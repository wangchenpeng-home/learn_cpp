//
// Created by 36376 on 2022/7/23.
//

// string库 learn

#include "string"
#include "iostream"
#include "cctype"

using std::string;
using std::cout;
using std::endl;

void forString() {
    string line;
    while (std::getline(std::cin, line)) {  // 不录入回车键
        if (line == "exit") {
            break;
        }
        //不等于空打印
        if (!line.empty()) {
            cout << line << endl;
        }
    }
}

void toValue() {
    string s1;
    string s2 = s1;
    string s3 = "this is s3";
    string s4("this is s4");
    string s5(3, 'a');

    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    cout << "s3 is " << s3 << endl;
    cout << "s4 is " << s4 << endl;
    cout << "s5 is " << s5 << endl;
}

void compare() {
    string s1 = "Hello";
    string s2 = "Hello World!";
    string s3 = "Hiya";
    cout << "s1["<< s1 <<"] is less s2[" << s2 << "] == " << (s1 < s2) << endl;
    cout << "s1["<< s1 <<"] is less s3[" << s3 << "] == " << (s1 < s3) << endl;
    cout << "s1["<< s2 <<"] is less s2[" << s3 << "] == " << (s2 < s3) << endl;
}

void Add() {
    string s1 = "Hello";
    string s2 = "World!\n";
    cout << "si is " << s1 << endl;
    cout << "s2 is " << s2 << endl;
    cout << "s1 + s2 is " << s1 + s2 << endl;

    //  +号两侧至少有一个string类型
    cout << R"("Hello" + "World" is false)" << endl;
    cout << "s1 + \"World\" is true" << endl;
}

void myPrint() {

    string s1 = "Hello World!!!!";
    decltype(s1.size()) punct_num = 0;
    for (auto c : s1) {
        cout << c;
    }
    cout << std::endl;

    for (auto c : s1) {
        if (ispunct(c)) {
            punct_num++;
        }
    }
    cout << "punct num is " << punct_num << endl;

    for (auto &c : s1) {
        if (isupper(c)) {
            c = char(tolower(c));
        }
    }
    cout << "s1 is " << s1 << endl;
}

int main() {
    myPrint();

    return 0;
}