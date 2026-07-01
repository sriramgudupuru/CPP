#include <iostream>        // For input and output operations
#include <winsock2.h>      // For Windows socket programming functions

#pragma comment(lib, "ws2_32.lib")  // Link WinSock library

using namespace std;

int main() {
    WSADATA wsa;                 // Structure to store WinSock information
    SOCKET clientSocket;         // Socket for client
    sockaddr_in serverAddr;      // Structure to store server address
    char buffer[1024];           // Buffer to store messages

    // Initialize WinSock version 2.2
    WSAStartup(MAKEWORD(2,2), &wsa);

    // Create a TCP socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Specify server address details
    serverAddr.sin_family = AF_INET;                  // IPv4 addressing
    serverAddr.sin_port = htons(8080);                // Server port number
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Server IP (localhost)

    // Connect client socket to server socket
    connect(clientSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));
    cout << "Connected to server!\n";

    // Loop for continuous chat
    while (true) {
        cout << "You: ";
        cin.getline(buffer, 1024);                     // Take input from user

        // Send message to server
        send(clientSocket, buffer, strlen(buffer), 0);

        // Clear buffer before receiving message
        memset(buffer, 0, sizeof(buffer));

        // Receive message from server
        recv(clientSocket, buffer, sizeof(buffer), 0);
        cout << "Server: " << buffer << endl;
    }

    // Close socket connection
    closesocket(clientSocket);

    // Clean up WinSock resources
    WSACleanup();

    return 0;   // End of program
}
