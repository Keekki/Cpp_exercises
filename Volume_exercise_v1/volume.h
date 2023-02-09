#pragma once

#include <stdexcept>

class Volume {
    public:
    static constexpr int startValue = 14; //onnennumero heh
    Volume(int value = startValue) {
        if (value < 0 || value > 100) {
            throw std::invalid_argument("Value must be between 0 and 100");
        }
        xValue = value;
    }

    int getValue() const { return xValue; }
    void setValue(int value) {
        if (value < 0 || value > 100) {
            throw std::invalid_argument("Value must be between 0 and 100");
        }
        xValue = value;
    }
    private:
    int xValue;
};

