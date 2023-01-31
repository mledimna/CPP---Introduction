#include <iostream>
#include <vector>

class HTTP{
public:
    HTTP(const unsigned int _port) : port(_port){
        std::cout<< "Initialize connection with socket " + std::to_string(port) + "..." << std::endl;
        std::cout<< "Connection established" << std::endl;
    }

    unsigned int get_port(void){
        return port;
    }

    virtual void get(void){
        std::cout<< "HTTP : GET /index.html" << std::endl;
    }
protected:
    unsigned int port = 0;
};

class HTTPS : public HTTP{
public:
    HTTPS(const unsigned int _port) : HTTP(_port) {}

    void get(void){
        std::cout<< "HTTPS : TLS Exchange" << std::endl;
        std::cout<< "HTTPS : GET /index.html" << std::endl;
    }
};

int main(int, char**) {
    HTTP http(80);
    std::cout<< "HTTP port is " + std::to_string(http.get_port()) << std::endl;
    http.get();

    HTTPS https(443);
    std::cout<< "HTTPS port is " + std::to_string(https.get_port()) << std::endl;
    https.get();
}

/*
Output :
    Initialize connection with socket 80...
    Connection established
    HTTP port is 80
    HTTP : GET /index.html
    Initialize connection with socket 443...
    Connection established
    HTTPS port is 443
    HTTPS : TLS Exchange
    HTTPS : GET /index.html
*/