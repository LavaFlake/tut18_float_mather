double calculateAnswer(double firstDouble, char sign, double secondDouble) {
	if (sign == '+')
		return firstDouble + secondDouble;
	if (sign == '-')
		return firstDouble - secondDouble;
	if (sign == '*')
		return firstDouble * secondDouble;
	if (sign == '/')
		return firstDouble / secondDouble;
}
