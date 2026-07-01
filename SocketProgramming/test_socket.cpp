#include <iostream>
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2,2), &wsa) == 0)
        std::cout << "Winsock initialized successfully\n";
    else
        std::cout << "Winsock failed\n";
    return 0;
}
