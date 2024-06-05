#ifndef USER_HEADER
#define USER_HEADER

/*
*  USER Header
*
*  For class USER
*/

#include "common.hpp"

// User Model
class User{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // username (CharField): Username for login
    STRING username;
    // password (CharField): Hashed password for secure storage
    STRING password;
    // first_name (CharField): User's first name
    STRING first_name;
    // last_name (CharField): User's last name
    STRING last_name;
    // email (EmailField): User's email address
    STRING email;
    // contact_info (CharField, optional): Additional contact details (phone number, etc.)
    STRING contact_info;
    // account_status (CharField): Status of the user account (active, inactive, locked)
    STRING account_status;
    // user_type (ForeignKey to UserType model, optional): Defines user type (librarian, patron, guest)
    STRING user_type;
};

// User Type Model
class UserType{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // name (CharField): User type name (e.g., Librarian, Patron, Guest)
    STRING name;
    // permissions (ManyToManyField to Permission model): Assigned permissions for the user type
    STRING permissions;
};

// Permission Model
class Permission{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // name (CharField): Permission name (e.g., add_media, edit_user, manage_loans)
    STRING name;
    // description (TextField, optional): Description of the permission
    STRING description;
};


// Patron Model
class Patron{
    private:
    // user (OneToOneField to User Model): Linked user account
    STRING user;
    // library_card_number (CharField): Unique library card number
    STRING library_card_number;
    // registration_date (DateField): Date of patron registration
    DATE registration_date;
    // date_of_birth (DateField): Patron's date of birth
    DATE date_of_birth;
    // address (TextField): Patron
    STRING address;
};

#endif