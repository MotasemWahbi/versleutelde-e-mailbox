//
// Created by motas on 10-6-2024.
//
#include "../hpp/User.hpp"
User::User(const std::string& name, const std::string& emailAddress, const std::string& password)
        : name(name), emailAddress(emailAddress), password(password) {}

User::User(const std::string& emailAddress, const std::string& password)
        : emailAddress(emailAddress), password(password) {}

User::User(const std::string& emailAddress)
        : emailAddress(emailAddress) {}

std::string User::getName() const {
    return name;
}

std::string User::getEmailAddress() const {
    return emailAddress;
}

std::string User::getPassword() const {
    return password;
}

void User::setName(const std::string& name) {
    this->name = name;
}

void User::setEmailAddress(const std::string& emailAddress) {
    this->emailAddress = emailAddress;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}

User::~User() = default;
1