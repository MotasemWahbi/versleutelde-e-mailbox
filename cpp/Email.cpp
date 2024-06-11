//
// Created by motas on 10-6-2024.
//

#include "../hpp/Email.hpp"
Email::Email(User* from, User* to, const std::string& content)
        : from(from), to(to), content(content) {}

User* Email::getFrom() const {
    return from;
}

User* Email::getTo() const {
    return to;
}

std::string Email::getContent() const {
    return content;
}

void Email::setFrom(User* from) {
    this->from = from;
}

void Email::setTo(User* to) {
    this->to = to;
}

void Email::setContent(const std::string& content) {
    this->content = content;
}

Email::~Email() {
    delete from;
    delete to;
}