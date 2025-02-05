
#include "../includes/Span.hpp"
#include <climits>

Span::Span() : _maxSize(5) {
}

Span::Span(unsigned int N) : _maxSize(N) {
}

Span::Span(const Span& copy) : _maxSize(copy._maxSize) {
}


Span& Span::operator=(Span& copy) {

	return copy;
}

const char* Span::MaxNumber::what() const throw() {
	return "Cannot add more number\n";
}

const char* Span::NotEnoughNumber::what() const throw() {
	return "Not enough number to get span\n";
}

void Span::fullStack() {
	for (unsigned int i = 0; i < _maxSize; i++) {
		int num = rand();
		_vec.insert(num);
	}
}

void Span::addNumber(int i) {
	if (_vec.size() >= _maxSize)
		throw Span::MaxNumber();
	
	_vec.insert(i);
}

int Span::shortestSpan() const {

	if (_vec.size() < 2)
		throw Span::NotEnoughNumber();

	std::set<int>::iterator it = _vec.begin();
	std::set<int>::iterator nexIt = it++;
	int smallest = INT_MAX;
	int span = 0;
	for (; nexIt != _vec.end(); ++it, ++nexIt) {
		span = *nexIt - *it;
		if (span < 0)
			span *= -1;
		if (span < smallest)
			smallest = span;
	}

	return smallest;
}

int Span::longestSpan() const {

	if (_vec.size() < 2)
		throw Span::NotEnoughNumber();

	std::set<int>::iterator end = _vec.end();
	std::set<int>::iterator begin = _vec.begin();
	end--;
	int biggest = *end;
	int smallest = *begin;
	int span = biggest - smallest;

	return span;
}

Span::~Span() {
}