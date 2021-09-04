#include <stdio.h>
#include <ctype.h>
using namespace std;
 
inline int getnum() {
    int chr = _getchar_nolock();
    if (isspace(chr))
        chr = _getchar_nolock();
 
    int a = chr - '0';
    while (isdigit(chr = _getchar_nolock()))
        a = a * 10 + chr - '0';
 
    return a;
}
 
int main() {
    long long n = getnum();
    long long num = (n * (n + 1)) / 2;
    for (int i = 1; i < n; ++i) {
        num -= getnum();
    }
    printf("%lld", num);
}