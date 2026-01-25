module;

#include <cstdint>

export module hal_gpio;
import hal_status;

export enum class GpioState {
    GPIO_HIGH,
    GPIO_LOW,
    GPIO_FLOATING
};

export struct GpioPin {
    void * port;
    uint16_t pin;
};

export class Gpio {
    public:
    ~Gpio() = default;
    virtual HalStatus write(GpioState state) = 0;
    virtual GpioState read() = 0;
    virtual HalStatus toggle() = 0;
};
