#ifndef MEDIA_HEADER
#define MEDIA_HEADER

#include "common.hpp"

// Media Model
class Media{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // title (CharField): Title of the media item
    STRING title;
    // author (CharField): Author(s) of the media item
    STRING author;
    // artist (ManyToManyField to Artist model, optional): Associated artist(s) (for music, movies, etc.)
    STRING artist;
    // director (CharField, optional): Director (for movies)
    STRING director;
    // publication_date (DateField): Publication/release date
    DATE publication_date;
    // format (CharField): Media format (book, DVD, audiobook, etc.)
    STRING format;
    // genre (ManyToManyField to Genre model): Genre(s) associated with the media item
    STRING genre;
    // call_number (CharField, optional): Call number for physical location
    STRING call_number;
    // description (TextField): Description of the media item
    STRING description;
    // availability_status (CharField): Availability status (available, loaned, overdue, reserved, lost, under maintenance)
    STRING availability_status;
    // category (ForeignKey to Category model, optional): Category of the media item (e.g., Books, Audiovisual Media)
    STRING category;
    // digital_file (FileField, optional): Link to the digital media file (if applicable)
    STRING digital_file;
    // access_permissions (ManyToManyField to UserType model, optional): Defines access permissions for digital media (if applicable)
    STRING access_permissions;
};


// Artist Model
class Artist{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // name (CharField): Artist name
    STRING name;
    // genre (ManyToManyField to Genre model, optional): Genre(s) associated with the artist
    STRING genre;
    // nationality (CharField, optional): Artist's nationality
    STRING nationality;
};


// Category Model
class Category{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // name (CharField): Category name (e.g., Books, Audiovisual Media)
    STRING name;
    // parent_category (ForeignKey to itself, null=True, blank=True): Defines parent category for subcategories (optional for hierarchical structure)
    STRING parent_category;
};


// Genre Model
class Genre{
    private:
    // id (integer): Unique identifier (primary key)
    INT id;
    // name (CharField): Genre name
    STRING name;
    // parent_genre (ForeignKey to itself, null=True, blank=True): Defines parent genre for subgenres (optional for hierarchical structure)
    STRING parent_genre;
};
#endif