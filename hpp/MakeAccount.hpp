//
// Created by motas on 11-6-2024.
//

#ifndef VERSLEUTELDE_E_MAILBOX_MAKEACCOUNT_HPP
#define VERSLEUTELDE_E_MAILBOX_MAKEACCOUNT_HPP

#include <vector>
#include <string>
#include "User.hpp"

class MakeAccount {
private:
    std::vector<User*> users;

public:
    bool createUser(const std::string& name, const std::string& emailAddress, const std::string& password);
    const std::vector<User*>& getUsers() const;
    ~MakeAccount();
};



#endif //VERSLEUTELDE_E_MAILBOX_MAKEACCOUNT_HPP
