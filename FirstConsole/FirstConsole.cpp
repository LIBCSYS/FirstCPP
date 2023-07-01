#include <iostream>
#include <string>

std::string compose()
{
    std::string first_email;
    std::string domain;

    std::cout << "Enter your email name: ";
    std::cin >> first_email;

    std::cout << "Enter your email domain name: ";
    std::cin >> domain;

    return first_email + '@' + domain;
}

int main()
{
    std::string banner = "Welcome to LIBCSystems IA/VR Server:\n\n\n";
    std::string user_greeting = "|-------------------------------|\n  System Access Granted:\n|-------------------------------|\n\n\n";

    std::cout << banner;
    std::cout << user_greeting;

    std::string user = compose();

    std::cout << "User Name: " << user << std::endl;

    while (true) {
        std::string input;
        std::cout << "Command::> ";
        std::cin >> input;

        // Process the input or perform other actions

        // If user wants to exit the program, you can add an exit condition in the loop
        if (input == "exit") {
            break;
        }
        if (input == "status") {
            std::cout << "All Systems Nominal, please continue.\n";
        }
        if (input == "help") {
            std::cout << "Current System Commands are:.\n";
            std::cout << "status - nominal status report:.\n";
            std::cout << "exit - quit the system.\n";
        }
    }
    std::cout << "goodbye.\n";
    return 0;
}