#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <limits.h>

class Span {

    private:
        unsigned int        _maxSize;
        std::vector<int>    _vec;
    
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);

        Span& operator=(const Span& copy);

        class MaxNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class NotEnoughNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        void addNumber(int i);
        int shortestSpan() const;
        int longestSpan() const;

        ~Span();
};

#endif