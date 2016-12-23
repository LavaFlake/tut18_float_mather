#include "math.h"
#include "io.h"

int main() {
	double firstDouble {getDouble()};
	char sign {getSign()};
	double secondDouble {getDouble()};

	if (sign == '+' || sign == '-' || sign == '*' || sign == '/') {
		double answer {calculateAnswer(firstDouble, sign, secondDouble)};

		displayAnswer(answer);
	} else {
		displayError();
	}

	return 0;
}
