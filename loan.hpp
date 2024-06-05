#ifndef LOAN_HEADER
#define LOAN_HEADER

#include "common.hpp"

// Loan Model
class Loan{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // media_item (ForeignKey to Media Model): Borrowed media item
    STRING media_item;
    // patron (ForeignKey to User Model): Patron who borrowed the item
    STRING patron;
    // loan_date (DateField): Date the item was borrowed
    DATE loan_date;
    // due_date (DateField): Due date for returning the item
    DATE due_date;
    // return_date (DateField, null=True, blank=True): Date the item was returned (if applicable)
    DATE return_date;
};

#endif