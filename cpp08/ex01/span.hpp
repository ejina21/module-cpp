#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
private:
    unsigned int n;
    std::vector<int> num_vector;
    int getSpan(int num1, int num2);
public:
    Span();
    Span(unsigned int n);
    Span(const Span &source);
    Span &operator= (const Span &source);
    int shortestSpan();
    int longestSpan();
    ~Span();
    void addNumber (int number);
    void addRangeNumber(int left, int right);
};

#endif