#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
#include <set>
# include <iterator>
# include <limits.h>

class Span {

    private:
        unsigned int        _maxSize;
        std::set<int>       _vec;
    
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);

        Span& operator=(Span& copy);

        class MaxNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class NotEnoughNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        void addNumber(int i);
        void fullStack();
        int shortestSpan() const;
        int longestSpan() const;

        ~Span();
};

#endif