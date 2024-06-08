#ifndef COMMON_HEADER
#define COMMON_HEADER

/*
Common Header File
*
*
* For Basic Data Types
*/

#include<vector>
#include<string>
#include<ctime>
#include<iostream>


// Forward declaration
class User;
class Media;

/*Basic Data Type Macros*/
#define STRING  std::string
#define INT     int
#define DATE    int // needs to set to correct date format
#define VECTOR_USER std::vector<User*>
#define VECTOR_MEDIA std::vector<Media>

// Type of the User 
enum class TypeOfTheUser{
    Admin,
    Librarian,
    Guest
};

// Account activity status 
enum class AccountStatus{
    Active,
    Inactive,
    Locked
};



#endif