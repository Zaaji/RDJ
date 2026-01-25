export module hal_gpio;

import hal_status;

export class Gpio {
    public:
    ~Gpio() = default;
    virtual HalStatus write() = 0;
    virtual HalStatus read() = 0;
    virtual HalStatus toggle() = 0;
};
