export module hal.gpio;

import hal.status;

export class Gpio {
    public:
    ~Gpio() = default;
    virutal HalStatus write() = 0;
    virtual HalStatus read() = 0;
    virutal HalStatus toggle() = 0;
};
