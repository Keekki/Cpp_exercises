#pragma once

#include <stdexcept>

class Volume {
    public:
    static constexpr int startValue = 14; //onnennumero heh
    static constexpr int minValue = 0; //minimi arvo volumelle
    static constexpr int maxValue = 100; //maksimi arvo volumelle

    Volume(int value = startValue, bool isClamping = true) :
    xisClamping(isClamping) {
        setValue(value);
    }

    int getValue() const { return xValue; }
    void setValue(int value) {
        if (xisClamping) {
            value = std::max(minValue, std::min(value, maxValue));
        }
        else if (value < minValue || value > maxValue) {
            throw std::invalid_argument("Volume must be between 0 and 100");
        }
        xValue = value;
    }

    bool isClamping() const { return xisClamping; }
    void setClamping(bool isClamping) { xisClamping = isClamping;}

    private:
    int xValue;
    bool xisClamping;
};
