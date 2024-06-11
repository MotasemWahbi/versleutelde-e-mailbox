//
// Created by motas on 10-6-2024.
//

#ifndef VERSLEUTELDE_E_MAILBOX_LOGIN_HPP
#define VERSLEUTELDE_E_MAILBOX_LOGIN_HPP

#include "User.hpp"

class Login : public User{
private:
    static const int MAX_USERS = 100;
    User* users[MAX_USERS];
    int userCount;
    User* currentUser;

public:
    Login();
    bool loginUser(const std::string& emailAddress, const std::string& password);
    void logoutUser();
    bool isUserLoggedIn() const;
    User* getCurrentUser() const;


    void addUser(User* user);

    ~Login();
};


#endif //VERSLEUTELDE_E_MAILBOX_LOGIN_HPP
