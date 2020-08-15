#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 50
#define stdin stdin
#define MAX 50 

struct Translater
{
    char english_word[MAX_LIMIT];
    char spanish_word[MAX_LIMIT];
    short limit;
};

struct Translater translater[MAX_LIMIT];


void add_word();
void print_word();
void set_limit_value();
void change_last_character(char word[]);

int main(int argc, char const *argv[])
{
    char numbers[MAX];
    set_limit_value(translater);
    
    

    char word_option = 'N';

    printf("*-*-*-*-*-*--*-*-*-*-*-*-*-*-*-*\n");
    printf("Translater Spanish-English v1.0\n");
    printf("*-*-*-*-*-*--*-*-*-*-*-*-*-*-*-*\n");


    do
    {
        int choise = 0;

        do
        {
            printf("What do u wanna do?\n");
            printf("(1) Add a new word\n");
            printf("(2) Translate a word\n");

            fgets(numbers, MAX, stdin);
            sscanf(numbers, "%d", &choise);

            switch (choise)
            {
            case 1:
                add_word();
                break;
            
            case 2:
                print_word();
                break;
            
            default:
                printf("Please, type a correct option!\n");
                break;
            }
            
        }while (choise == 0);

        printf("Do you wanna continue? (Y/N) ");

        fflush(stdin);
        fgets(numbers, MAX, stdin);
        sscanf(numbers, "%c", &word_option);

        if ((word_option == 'N') || (word_option == 'n'))
        {
            break;
        }

    }while (1);


    return 0;
}

/**
 * <p>With this method the user can add words
 * in Spanish and English. If the case 1, the word
 * will save in the ,<b>spanish_word</b> otherwise
 * if case is 2 so the word will save in <b>english_word</b></p>
*/
void add_word() {
    short choise;
    char numbers[MAX];

    printf("In what language do you want to add the word?\n");
    printf("(1) Spanish\n(2) English\n");

    fgets(numbers, MAX, stdin);
    sscanf(numbers, "%d", &choise);
    fflush(stdin);

    for (size_t i = 0; i < MAX_LIMIT; i++)
    {
        if (i != 0) {
            break;
        }
        switch (choise)
        {
            // Spanish case
        case 1:
            printf("Type the word: \n");
            fgets(translater[i].spanish_word, MAX_LIMIT, stdin);

            fflush(stdin);

            change_last_character(translater[i].spanish_word);


            translater[i].limit = i + 1;

            // Meaning the world in the another language
            printf("Type the word's translation: \n");
            fgets(translater[i].english_word, MAX_LIMIT, stdin);
            change_last_character(translater[i].english_word);
            fflush(stdin);
            break;
            
            // English case
        case 2:
            printf("Type the word: \n");
            fgets(translater[i].english_word, MAX_LIMIT, stdin);

            fflush(stdin);

            change_last_character(translater[i].english_word);

            translater[i].limit = i + 1;

            // Meaning the world in the another language
            printf("Type the word's translation: \n");
            fgets(translater[i].spanish_word, MAX_LIMIT, stdin);
            fflush(stdin);
            change_last_character(translater[i].spanish_word);
            break;
        
        default:
            printf("There are only 2 options! Please select correctly!");
            break;
        }

    }

}

/**
 * Print the word that the user is searching!
 * There are two cases: 
 * First case: The user want to search a word in Spanish.
 * Second case: The user want to search a word in English.
 * Depending of the case this method will print
 * the word with its meaning in the another language.
*/
void print_word() {
    short choice;
    char array[MAX_LIMIT];
    char search_word[MAX_LIMIT];

    printf("In what language do you want to search the word?: \n");
    printf("(1) Spanish.\n");
    printf("(2) English.\n");
    fgets(array, MAX_LIMIT, stdin);
    sscanf(array, "%d", &choice);

    switch (choice)
    {
    case 1:

        printf("Type the word to search: ");
        fgets(search_word, MAX_LIMIT, stdin);
        change_last_character(search_word);

        for (size_t i = 0; i < MAX_LIMIT; i++)
        {
            /**
             *      Spanish
             * Compare with the string's method when the two word are the same
             * and print out it with your another language meaning.
            */ 
           if ((strcmp(translater[i].spanish_word, search_word)) == 0)
           {
               printf(
                    "Your word is %s and its meaning in English is %s .\n", 
                    translater[i].spanish_word, translater[i].english_word
               );

               break;
           }
           else
           {
               printf("Make sure that you have the word that your seach already save!\n");
               break;
           }
           
        }
    
        break;
    
    case 2:
        printf("Type the word to search: ");
        fflush(stdin);
        fgets(search_word, MAX_LIMIT, stdin);

        change_last_character(search_word);
    
        for (size_t j = 0; j < MAX_LIMIT; j++)
        {
            /**
             *      English
             * Compare with the string's method when the two word are the same
             * and print out it with your another language meaning.
            */ 
           if ((strcmp(translater[j].english_word, search_word)) == 0)
           {
               printf(
                    "Your word is %s and its meaning in Spanish is %s .\n", 
                    translater[j].english_word, translater[j].spanish_word
               );

               break;
           }
           else
           {
               printf("Make sure that you have the word that your seach already save!\n");
               break;
           }
        }
            
        break;
    
    default:
        printf("Type a correct number!");
        break;
    }
    
  

}

void change_last_character(char word[MAX_LIMIT]) {
    for (size_t i = 0; i < MAX_LIMIT; i++)
    {
        if (word[i] == '\n')
        {
            word[i] = '\0';
        }
        
        if (word[i] == '\n')
        {
            word[i] = '\0';
        }
        
    }
    
    printf("it works change_last_character\n");
}

void set_limit_value() {
    for (size_t i = 0; i < MAX_LIMIT; i++)
    {
        translater[i].limit = 0;
    }
    
    
}