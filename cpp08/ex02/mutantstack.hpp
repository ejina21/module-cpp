#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack() : std::stack<T>() {
        return;
    };
    MutantStack(MutantStack &origin) : std::stack<T>(origin) {
        return;
    };
    MutantStack &operator=(MutantStack &origin){
        if (this == &origin)
            return *this;
        this->c = origin.c;
        return *this;
    };
    ~MutantStack<T>() {
        return;
    };
    iterator begin() {
        return std::stack<T>::c.begin();
    };
    iterator end() {
        return std::stack<T>::c.end();
    };
};

#endif