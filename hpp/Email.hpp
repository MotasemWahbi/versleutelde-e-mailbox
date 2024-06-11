//
// Created by motas on 10-6-2024.
//

#ifndef VERSLEUTELDE_E_MAILBOX_EMAIL_HPP
#define VERSLEUTELDE_E_MAILBOX_EMAIL_HPP
#include "User.hpp"

class Email {
private:
    User* from;
    User* to;
    std::string content;

public:
    Email(User* from, User* to, const std::string& content);

    User* getFrom() const;
    User* getTo() const;
    std::string getContent() const;

    void setFrom(User* from);
    void setTo(User* to);
    void setContent(const std::string& content);

    ~Email();
};


#endif //VERSLEUTELDE_E_MAILBOX_EMAIL_HPP
1