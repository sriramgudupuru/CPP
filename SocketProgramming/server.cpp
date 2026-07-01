#include <iostream>        // For input and output operations
#include <winsock2.h>      // For Windows socket programming

#pragma comment(lib, "ws2_32.lib")  // Link WinSock library

using namespace std;

int main() {
    WSADATA wsa;                 // Structure to store WinSock information
    SOCKET serverSocket, clientSocket; // Sockets for server and client
    sockaddr_in serverAddr, clientAddr; // Structures for server and client addresses
    int clientSize = sizeof(clientAddr); // Size of client address structure
    char buffer[1024];           // Buffer to store messages

    // Initialize WinSock version 2.2
    WSAStartup(MAKEWORD(2,2), &wsa);

    // Create a TCP socket for the server
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Assign server address details
    serverAddr.sin_family = AF_INET;        // IPv4 addressing
    serverAddr.sin_port = htons(8080);      // Port number
    serverAddr.sin_addr.s_addr = INADDR_ANY; // Accept connections from any IP

    // Bind socket to IP address and port
    bind(serverSocket, (sockaddr*)&serverAddr, sizeof(serverAddr));

    // Put server socket into listening mode
    listen(serverSocket, 1);

    cout << "Waiting for client...\n";

    // Accept incoming client connection
    clientSocket = accept(serverSocket, (sockaddr*)&clientAddr, &clientSize);
    cout << "Client connected!\n";

    // Loop for continuous chat
    while (true) {
        // Clear buffer before receiving message
        memset(buffer, 0, sizeof(buffer));

        // Receive message from client
        recv(clientSocket, buffer, sizeof(buffer), 0);
        cout << "Client: " << buffer << endl;

        // Take input from server user
        cout << "You: ";
        cin.getline(buffer, 1024);

        // Send message to client
        send(clientSocket, buffer, strlen(buffer), 0);
    }

    // Close client socket
    closesocket(clientSocket);

    // Close server socket
    closesocket(serverSocket);

    // Release WinSock resources
    WSACleanup();

    return 0;   // End of program
}
