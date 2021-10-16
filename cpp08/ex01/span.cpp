#include "span.hpp"

    Span::Span() {
        n = 1;
    }

    Span::Span(unsigned int n) : n(n) {
        if (n == 0)
            throw std::runtime_error("Zero exception");
    }

    Span::Span(const Span &source) {
        *this = source;
    }

    Span &Span::operator= (const Span &source) {
        n = source.n;
        num_vector = source.num_vector;
        return *this;
    }

    int Span::shortestSpan() {
        if (num_vector.size() < 2)
            throw std::runtime_error("Can't find span couse container size is too small");
        std::sort(num_vector.begin(), num_vector.end());
        int min = getSpan(num_vector[0], num_vector[1]);
        for (unsigned int i = 0; i < num_vector.size(); ++i) {
            int check = getSpan(num_vector[i], num_vector[i + 1]);
            if (check < min)
                min = check;
        }
        return min;
    }

    int Span::longestSpan() {
        if (num_vector.size() < 2)
            throw std::runtime_error("Can't find span couse container size is too small");
        std::sort(num_vector.begin(), num_vector.end());
        return getSpan(num_vector.at(0), num_vector.at(num_vector.size() - 1));
    }

    Span::~Span() {
        return;
    }

    void Span::addNumber (int number) {
        if (num_vector.size() == n)
            throw std::runtime_error("Out of container exception");
        num_vector.push_back(number);
    }

    void Span::addRangeNumber(int left, int right) {
        for (int i = left; i <= right; ++i) {
            addNumber(i);
        }
    }

    int Span::getSpan(int num1, int num2) {
        return num1 > num2 ? num1 - num2 : num2 - num1;
    }