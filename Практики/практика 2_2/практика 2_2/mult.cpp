#include "mult.hpp"
#include "sum.hpp"
namespace mult {
	std::string mlt(std::string a, std::string b) {
		if (a == "0" || b == "0") {
			return "0";
		}
		std::reverse(b.begin(), b.end());
		std::string multt = "";
		std:: string slog = "";
		int q = 0;
			for (int i = 0; i < b.length(); i++) {
				std::string w;
				for (int l = 0; l < b[i] - '0'; l++) {
					w = (sum::sm(w, a));
				}
				for (int j = 0; j < q; j++) {
					w += "0";
				}
				slog = sum::sm(slog, w);
				q += 1;
			}
		multt = slog;
		return multt;
	}
}
