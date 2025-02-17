#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> chatbotResponses = {
    {"hello", "Hi there! How can I assist you today?"},
    {"how are you", "I'm just a program, but I'm running smoothly!"},
    {"what is your name", "I am C++ Chatbot, your assistant!"},
    {"bye", "Goodbye! Have a great day!"}
};

string getResponse(string input) {
    for (auto& [key, value] : chatbotResponses) {
        if (input.find(key) != string::npos) return value;
    }
    return "I'm not sure how to respond to that.";
}

int main() {
    string userInput;
    cout << "Chatbot: Hello! Ask me something. Type 'bye' to exit.\n";
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        for (auto& c : userInput) c = tolower(c);
        string response = getResponse(userInput);
        cout << "Chatbot: " << response << endl;
        if (userInput == "bye") break;
    }
    return 0;
}
