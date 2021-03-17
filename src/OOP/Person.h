#if !defined(PERSON)
#define PERSON

struct Person
{
    char *name;
    int *age;
    char *address;
    char *profession;

    // Setter methods.
    void (*set_address)(char *const address);
    void (*set_profession)(char *const profession);

    // Getter methods.
    char *(*get_name)(struct Person *const self);
    int (*get_age)(struct Person *const self);
    char *(*get_address)(struct Person *const self);
    char *(*get_profession)(struct Person *const self);
};

struct Person *__init__(char *name, int const age);

char *get_name();
void set_name(char *const name);

char *get_address();
void set_address(char *const address);

char *get_profession();
void set_profession(char *const profession);

int get_age();
void set_age(int *const age);

#endif // PERSON