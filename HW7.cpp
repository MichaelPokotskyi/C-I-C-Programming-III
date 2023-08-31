////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// HW7.cpp
//// Win10, Visual C++ 2022, ISO C17
////
//// Tests for StringUtility class implementation.
//
//
//#include "StringUtility.h"
//#include <iostream>
//#include <vector>
//#include <string>
//
//using std::cout;
//using namespace MichaelPokotskyi;
//
//int main() {
//    char del = '*';
//    StringUtility s;
//    vector<string> vec;
//    vec.push_back("abc");
//    vec.push_back("def");
//    vec.push_back("ghi");
//    
//    // test join
//    cout << "Testing JOIN\n";
//    cout << "Original vector: ";
//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << " ";
//    }
//    cout << "\nModified string returned: " << s.join(vec, del) << "\n\n";
//    
//    // test reverse
//    cout << "Testing REVERSE\n";
//    cout << "Original vector: ";
//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << " ";
//    }
//    vector<string>mod = s.reverse(vec);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < mod.size(); i++) {
//        cout << mod[i] << " ";
//    }
//    cout << "\n\n";
//
//    // test combine
//    vector<string> comb0;
//    comb0.push_back("ab");
//    comb0.push_back("cd");
//    comb0.push_back("ef");
//
//    vector<string> comb1;
//    comb1.push_back("gh");
//    comb1.push_back("ij");
//    comb1.push_back("kl");
//
//    cout << "Testing COMBINE\n";
//    cout << "Original vector one: ";
//    for (int i = 0; i < comb0.size(); i++) {
//        cout << comb0[i] << " ";
//    }
//    cout << "\nOriginal vector two: ";
//    for (int i = 0; i < comb1.size(); i++) {
//        cout << comb1[i] << " ";
//    }
//    vector<string> comb = s.combine(comb0, comb1);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < comb.size(); i++) {
//        cout << comb[i] << " ";
//    }
//    cout << "\n\n";
//
//    // test leftpad
//    del = '*';
//    vector<string> pad;
//    pad.push_back("a");
//    pad.push_back("bb");
//    pad.push_back("ccc");
//    cout << "Testing LEFTPAD\n";
//    cout << "Original vector: ";
//    for (int i = 0; i < pad.size(); i++) {
//        cout << pad[i] << " ";
//    }
//    vector<string> padd = s.leftPad(pad, del);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < padd.size(); i++) {
//        cout << padd[i] << " ";
//    }
//    cout << "\n\n";
//
//    // test join with given arguments
//    cout << "Testing JOIN with given arguments\n";
//    vec = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
//    del = ',';
//    cout << "Original vector: ";
//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << " ";
//    }
//    cout << "\nModified string returned: " << s.join(vec, del) << "\n\n";
//
//    // test reverse with given arguments
//    cout << "Testing REVERSE with given arguments\n";
//    cout << "Original vector: ";
//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << " ";
//    }
//    mod = s.reverse(vec);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < mod.size(); i++) {
//        cout << mod[i] << " ";
//    }
//    cout << "\n\n";
//
//
//    // test combine with given arguments
//    comb0 = {"Mr.", "Mrs."};
//    comb1 = {"Jones", "Smith", "Williams"};
//    
//    cout << "Testing COMBINE with given conditions\n";
//    cout << "Original vector one: ";
//    for (int i = 0; i < comb0.size(); i++) {
//        cout << comb0[i] << " ";
//    }
//    cout << "\nOriginal vector two: ";
//    for (int i = 0; i < comb1.size(); i++) {
//        cout << comb1[i] << " ";
//    }
//    comb = s.combine(comb0, comb1);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < comb.size(); i++) {
//        cout << comb[i] << " ";
//    }
//    cout << "\n\n";
//
//    // test leftpad with given conditions
//    del = '*';
//    pad = { "The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog" };
//    cout << "Testing LEFTPAD with given conditions\n";
//    cout << "Original vector: ";
//    for (int i = 0; i < pad.size(); i++) {
//        cout << pad[i] << " ";
//    }
//    padd = s.leftPad(pad, del);
//    cout << "\nModified vector: ";
//    for (int i = 0; i < padd.size(); i++) {
//        cout << padd[i] << " ";
//    }
//    cout << "\n";
//}