#include <iostream>
#include <winsock2.h>
#include <thread>

#pragma comment(lib, "ws2_32.lib")

void receiveMessages(SOCKET s) {
    char buf[1024];
    while (true) {
        int r = recv(s, buf, sizeof(buf), 0);
        if (r <= 0) break;
        buf[r] = '\0';
        std::cout << "Server: " << buf << std::endl;
    }
}

int main() {
    thread t(receiveMessages, INVALID_SOCKET);
    t.join();
}
