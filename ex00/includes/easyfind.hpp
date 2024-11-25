#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

template <typename T>

typename T::iterator easyfind(T& container, int to_find) {

    typename T::iterator i = std::find(container.begin(), container.end(), to_find);
    if (i != container.end())
        return i;

    throw std::exception();
};


#endif