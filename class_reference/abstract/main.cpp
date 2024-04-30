#include <iostream>
#include <vector>

class COM_Peripheral{
public:
    virtual void transmit(std::string _message) = 0;

protected:
    virtual void on(void) = 0;
    virtual void off(void) = 0;
};

class UART : public COM_Peripheral{
public:
    UART(){this->on();}
    ~UART(){this->off();}

    void transmit(std::string _message) {
        std::cout << "UART Transmit : " << _message << std::endl;
    }

private:    
    void on(void) { std::cout << "UART power on procedure" << std::endl; }
    void off(void) { std::cout << "UART power off procedure" << std::endl; }
};

class SPI : public COM_Peripheral{
public:
    SPI(){this->on();}
    ~SPI(){this->off();}

    void transmit(std::string _message){
        std::cout << "Select SPI device" << std::endl;
        std::cout << "SPI Transmit : " << _message << std::endl;
        std::cout << "Deselect SPI device" << std::endl;
    }

private:    
    void on(void) { std::cout << "SPI power on procedure" << std::endl; }
    void off(void) { std::cout << "SPI power off procedure" << std::endl; }
};

int main(int, char**) {
    std::string message = "Some message to send over various protocols";

    UART * uart = new UART;
    SPI * spi = new SPI;
    
    std::vector<COM_Peripheral*> peripherals = {uart, spi};

    peripherals.at(0)->transmit(message);
    peripherals.at(1)->transmit(message);

    peripherals.clear();
    
    delete uart;
    delete spi;
}
