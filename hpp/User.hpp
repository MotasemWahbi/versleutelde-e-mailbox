//
// Created by motas on 10-6-2024.
//

#ifndef VERSLEUTELDE_E_MAILBOX_USER_HPP
#define VERSLEUTELDE_E_MAILBOX_USER_HPP

#include "iostream"

class User {
private:
    std::string name;
    std::string emailAddress;
    std::string password;

public:
    User(const std::string& name, const std::string& emailAddress, const std::string& password);
    User(const std::string& emailAddress, const std::string& password);
    User(const std::string& emailAddress);

    std::string getName() const;
    std::string getEmailAddress() const;
    std::string getPassword() const;
    void setName(const std::string& name);
    void setEmailAddress(const std::string& emailAddress);
    void setPassword(const std::string& password);

    ~User();
};


#endif //VERSLEUTELDE_E_MAILBOX_USER_HPP
