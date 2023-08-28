//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// StringUtility.cpp
// Win10, Visual C++ 2022, ISO C17
//
// StringUtility function implementation.

#include<string>
#include<vector>
#include "StringUtility.h"

// join
string
MichaelPokotskyi::StringUtility::join(const vector<string>& strVect, char delim)
{
    string str;
    for (unsigned int i = 0; i < strVect.size(); i++) {
        str += strVect[i];
        if ((i + 1) < strVect.size())
            str += delim;
    }
    return str;
}

// reverse
vector<string>
MichaelPokotskyi::StringUtility::reverse(const vector<string>& strVect)
{
    vector<string> vec;
    for (unsigned int i = 0; i < strVect.size(); i++) {
        vec.push_back(strVect[(strVect.size() - 1) - i]);
    }
    return vec;
}

// combine
vector<string>
MichaelPokotskyi::StringUtility::combine(const vector<string>& left, const
    vector<string>& right)
{
    vector<string> retval;
    for (unsigned int idx = 0; idx < left.size(); idx++)
        for (unsigned int idx2 = 0; idx2 < right.size(); idx2++)
            retval.push_back(left[idx] + right[idx2]);
    return retval;
}

// Leftpad Function
vector<string>
MichaelPokotskyi::StringUtility::leftPad(const vector<string>& strVect, char pad)
{
    vector<string> retval;
    unsigned int maxSize = 0;
    // Find max size
    for (unsigned int idx = 0; idx < strVect.size(); idx++) {
        if (strVect[idx].size() > maxSize)
            maxSize = strVect[idx].size();
    }

    // Add padding
    for (unsigned int idx = 0; idx < strVect.size(); idx++) {
        retval.push_back("");
        retval[idx].insert(0, maxSize - strVect[idx].size(), pad);
        retval[idx] += strVect[idx];
    }
    return retval;
}