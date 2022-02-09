#include <stdio.h>
#include <string>
#include <unordered_map>

int iota(bool reset = false) {
    static int i = 0;
    if (reset) i = 0;
    return i++;
}

std::unordered_map<int, std::string> map {
    { iota(), "one" },
    { iota(), "two" },
    { iota(), "three" },
    { iota(), "four" },
    { iota(), "five" },
};

int main() {

    for (auto d : map) {
        printf("%d : %s\n", d.first, d.second.c_str());
    }

    return 0;
}