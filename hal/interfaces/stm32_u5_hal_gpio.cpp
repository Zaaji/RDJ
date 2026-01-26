module hal_gpio;

Gpio::Gpio(GpioPin inPin) {pin = inPin;}

GpioState Gpio::read() const {return GpioState::GPIO_HIGH;}
