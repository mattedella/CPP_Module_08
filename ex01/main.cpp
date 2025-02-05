
#include "includes/Span.hpp"

int main() {
	try {

		Span sp = Span(2000);
		sp.fullStack();
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// sp.addNumber(23);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (Span::MaxNumber& e) {
		std::cerr << e.what();
	}
	catch (Span::NotEnoughNumber& e) {
		std::cerr << e.what();
	}
	return 0;
}