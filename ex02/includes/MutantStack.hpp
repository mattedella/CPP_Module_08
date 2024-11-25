#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <deque>
# include <stack>
# include <limits.h>

template<typename T>

class MutantStack : public std::stack<T> {

    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;

        iterator begin() {
            return this->c.begin();
        };
        const_iterator constBegin() {
            return this->c.constBegin();
        };
        iterator end() {
            return this->c.end();
        };
        const_iterator constEnd() {
            return this->c.constEnd();
        };
};

#endif