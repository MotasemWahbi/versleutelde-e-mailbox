cmake_minimum_required(VERSION 3.28)
project(versleutelde_e_mailbox)

set(CMAKE_CXX_STANDARD 17)

add_executable(versleutelde_e_mailbox main.cpp
        hpp/User.hpp
        cpp/user.cpp
        hpp/Email.hpp
        cpp/Email.cpp
        hpp/Login.hpp
        cpp/Login.cpp
        hpp/MakeAccount.hpp
        cpp/MakeAccount.cpp)
