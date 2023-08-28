//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// StringUtility.h
// Win10, Visual C++ 2022, ISO C17
//
// StringUtility function prototypes.

// include guard
#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H

using std::string;
using std::vector;

// defined namespace
namespace MichaelPokotskyi
{
    class StringUtility
    {
    public:
        // function prototypes
        string join(const vector<string>&str, char delim);
        vector<string> reverse(const vector<string>& str);
        vector<string> combine(const vector<string>& left, const vector<string>& right);
        vector<string> leftPad(const vector<string>& str, char pad);
    };
}
#endif