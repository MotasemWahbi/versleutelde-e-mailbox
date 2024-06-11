//
// Created by motas on 11-6-2024.
//

#include "../hpp/MakeAccount.hpp"

bool MakeAccount::createUser(const std::string& name, const std::string& emailAddress, const std::string& password) {
    for (User* user : users) {
        if (user->getEmailAddress() == emailAddress) {
            return false;
        }
    }
    users.push_back(new User(name, emailAddress, password));
    return true;
}

const std::vector<User*>& MakeAccount::getUsers() const {
    return users;
}

MakeAccount::~MakeAccount() {
    for (User* user : users) {
        delete user;
    }
}
