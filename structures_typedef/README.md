DESCRIPTION:

1-init_dog.c
Description: Defines a function init_dog that initializes a dog_t structure with specified values for name, age, and owner. It sets default values for these properties.

2-print_dog.c
Description: Defines a function print_dog that prints the information of a dog (name, age, and owner). If any attribute is NULL, it prints (nil) instead of the attribute.

4-new_dog.c
Description: Defines a function new_dog that creates a new dog by dynamically allocating memory for its name and owner and copying their values. It also sets the age of the dog.

5-free_dog.c
Description: Defines a function free_dog that frees the memory allocated for the dog’s name, owner, and the dog structure itself to prevent memory leaks.

dog.h
Description: Header file that defines the dog structure and dog_t typedef, containing fields for the dog's name, age, and owner. It also includes function prototypes for operations on the dog structure.
