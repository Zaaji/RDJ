#include <iostream>
import hal_gpio;

int main(void) {
    Gpio pin(GpioPin{nullptr, 8});
    std::cout << static_cast<int>(pin.read()) << std::endl;
}
