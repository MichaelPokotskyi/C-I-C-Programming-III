//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// StringUtility.cpp
// Win10, Visual C++ 2022, ISO C17
//
// StringUtility function implementation.

#include "StringUtility.h"
#include<string>
using std::string;
#include<vector>
using std::vector;
using std::swap;

// join
string
MichaelPokotskyi::StringUtility::join(const vector<string>& strVect, char delim) {
    string str;
    for (int i = 0; i < strVect.size(); i++) {
        str += strVect[i];
        if ((i + 1) < strVect.size())
            str += delim;
    }
    return str;
}

// reverse
vector<string>
MichaelPokotskyi::StringUtility::reverse(const vector<string>& strVect) {
    vector<string> vec;
    for (int i = 0; i < strVect.size(); i++) {
        vec.push_back(strVect[(strVect.size() - 1) - i]);
    }
    for (int i = 0; i < vec.size(); i++) {
        string temp = vec[i];
        int k = temp.size() - 1, l = 0;
        while (l <= k) {
            swap(temp[l], temp[k]);
            k = k - 1;
            l = l + 1;
        }
        vec[i] = temp;
    }
    return vec;
}

// combine
vector<string>
MichaelPokotskyi::StringUtility::combine(const vector<string>& left, 
    const vector<string>& right) {
    vector<string> str;
    for (int i = 0; i < left.size(); i++)
        for (int j = 0; j < right.size(); j++)
            str.push_back(left[i] + right[j]);
    return str;
}

// leftpad
vector<string>
MichaelPokotskyi::StringUtility::leftPad(const vector<string>& strVect, char pad) {
    vector<string> vec;
    int maxSize = 0;
    // find max size
    for (int i = 0; i < strVect.size(); i++) {
        if (strVect[i].size() > maxSize)
            maxSize = strVect[i].size();
    }
    // add padding
    for (int i = 0; i < strVect.size(); i++) {
        vec.push_back("");
        vec[i].insert(0, maxSize - strVect[i].size(), pad);
        vec[i] += strVect[i];
    }
    return vec;
}