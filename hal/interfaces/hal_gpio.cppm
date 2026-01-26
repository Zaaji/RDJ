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
    private:
        GpioPin pin;
    public:
        Gpio(GpioPin pin);
        HalStatus write(GpioState state);
        GpioState read() const;
        HalStatus toggle();
};
