
#include "../includes/Span.hpp"

Span::Span() : _maxSize(5) {
}

Span::Span(unsigned int N) : _maxSize(N) {
}

Span::Span(const Span& copy) : _maxSize(copy._maxSize) {
}


Span& Span::operator=(const Span& copy) {
    if (this != &copy) {
        _maxSize = copy._maxSize;
        for (unsigned int i = 0; i < _maxSize; i++)
            _vec[i] = copy._vec[i];
    }

    return *this;
}

const char* Span::MaxNumber::what() const throw() {
    return "Cannot add more number\n";
}

const char* Span::NotEnoughNumber::what() const throw() {
    return "Not enough number to get span\n";
}

void Span::addNumber(int i) {
    if (_vec.size() >= _maxSize)
        throw Span::MaxNumber();
    
    _vec.push_back(i);
}

int Span::shortestSpan() const {

    if (_vec.size() < 2)
        throw Span::NotEnoughNumber();

    int span = INT_MAX;

    for (size_t i = 0; i < _vec.size(); i++) {
        for (size_t j = i + 1; j < _vec.size(); j++) {
            int diff = _vec[i] - _vec[j];
            if (diff < 0)
                diff *= -1;
            if (span > diff)
                span = diff;
        }
    }

    return span;
}

int Span::longestSpan() const {

    if (_vec.size() < 2)
        throw Span::NotEnoughNumber();

    int span = 0;

    for (size_t i = 0; i < _vec.size(); i++) {
        for (size_t j = i; j < _vec.size(); j++) {
            int diff = _vec[i] - _vec[j];
            if (diff < 0)
                diff *= -1;
            if (span < diff)
                span = diff;
        }
    }

    return span;
}

Span::~Span() {
}