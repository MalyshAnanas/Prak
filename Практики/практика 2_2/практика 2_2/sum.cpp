#include "sum.hpp"
#include <algorithm>

namespace sum {
    std::string sm(std::string a, std::string b) {
        std::string summ = "";
        std::reverse(a.begin(), a.end());
        std::reverse(b.begin(), b.end());
        int ost = 0;
        int minLen = std::min(a.length(), b.length());
        int maxLen = std::max(a.length(), b.length());
        for (int i = 0; i < minLen; i++) {
            int s = (a[i] - '0') + (b[i] - '0') + ost;
            int res = s % 10;
            ost = s / 10;
            summ += res + '0';
        }
        if (a.length() < b.length()) {
            for (int i = minLen; i < maxLen; i++) {
                int s = (b[i] - '0') + ost;
                int res = s % 10;
                ost = s / 10;
                summ += res + '0';
            }

        }
        else {
            for (int i = minLen; i < maxLen; i++) {
                int s = (a[i] - '0') + ost;
                int res = s % 10;
                ost = s / 10;
                summ += res + '0';
            }
        }
        if (ost != 0) {
            summ += ost + '0';
        }
        std::reverse(summ.begin(), summ.end());
        return summ;
    }
}