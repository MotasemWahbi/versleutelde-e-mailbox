//
// Created by motas on 10-6-2024.
//

#include "../hpp/Login.hpp"
#include <cstring>

Login::Login()  {
    userCount = 0;
    currentUser = nullptr;
    for (int i = 0; i < MAX_USERS; ++i) {
        users[i] = nullptr;
    }
}

bool Login::loginUser(const std::string& emailAddress, const std::string& password) {
    if (currentUser != nullptr) {
        return false;
    }

    for (int i = 0; i < userCount; ++i) {
        if (users[i]->getEmailAddress() == emailAddress && users[i]->getPassword() == password) {
            currentUser = users[i];
            return true;
        }
    }
    return false;
}

void Login::logoutUser() {
    currentUser = nullptr;
}

bool Login::isUserLoggedIn() const {
    return currentUser != nullptr;
}

User* Login::getCurrentUser() const {
    return currentUser;
}

void Login::addUser(User* user) {
    if (userCount < MAX_USERS) {
        users[userCount++] = user;
    }
}

Login::~Login() {
    for (int i = 0; i < userCount; ++i) {
        delete users[i];
    }
}
