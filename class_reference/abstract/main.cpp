#include <iostream>
#include <vector>

class COM_Peripheral{
public:
    // Pure virtual method (by = 0)
    virtual void transmit(std::string _message) = 0;
    virtual std::string recieve(void) = 0;

protected:
    // Pure virtual methods (by = 0)
    virtual void on(void) = 0;
    virtual void off(void) = 0;
};

class UART : public COM_Peripheral{
public:
    UART(){this->on();}
    ~UART(){this->off();}

    void transmit(std::string _message) override {
        std::cout << "UART Transmit : " << _message << std::endl;
    }

    std::string recieve(void) override {
        std::string message = "Nouveau message !!";
        std::cout << "UART recieve : " << message << std::endl;
        return message;
    }

private:    
    void on(void) override { std::cout << "UART power on procedure" << std::endl; }
    void off(void) override { std::cout << "UART power off procedure" << std::endl; }
};

class SPI : public COM_Peripheral{
public:
    SPI(){this->on();}
    ~SPI(){this->off();}

    void transmit(std::string _message) override {
        std::cout << "Select SPI device" << std::endl;
        std::cout << "SPI Transmit : " << _message << std::endl;
        std::cout << "Deselect SPI device" << std::endl;
    }

    std::string recieve(void) override {
        std::string message = "Nouveau message !!";
        std::cout << "Select SPI device" << std::endl;
        std::cout << "SPI recieve : " << message << std::endl;
        std::cout << "Deselect SPI device" << std::endl;
        return message;
    }

private:    
    void on(void) override { std::cout << "SPI power on procedure" << std::endl; }
    void off(void) override { std::cout << "SPI power off procedure" << std::endl; }
};

int main(int, char**) {
    std::string message = "Some message to send over various protocols";

    UART uart;
    SPI spi;

    /*
    Lorsqu'on définit une classe UART, en mémoire on se retrouve avec :

    ------------------------------------- @ 0x...
    COM_Peripheral

    -> transmit
    -> on
    -> off
    ------------------------------------- @ 0x... + sizeof(COM_Peripheral)
    UART

    // Ici tout ce qui est propre à UART
    --------------------------------------

    */

    // std::vector -> indique qu'il s'agit d'un vecteur en C++
    // <COM_Peripheral*> -> indique que le vecteur contient des pointeurs de type COM_Peripheral
    // peripherals -> le nom de notre vecteur
    std::vector<COM_Peripheral*> peripherals = {&uart, &spi};

    // .at(0) renvoie l'élément 0 du vecteur
    peripherals.at(0)->transmit(message);
    peripherals.at(1)->transmit(message);

    peripherals.at(0)->recieve();
    peripherals.at(1)->recieve();

    peripherals.clear();
}
