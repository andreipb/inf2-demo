#ifndef MAXIMUM_H
#define MAXIMUM_H

#include <iostream>

template <typename T> T maximum(T x, T y) {
    std::cout << "Appel de maximum" << std::endl;
    return (x>y)?x:y;
}

#endif /* MAXIMUM_H */
