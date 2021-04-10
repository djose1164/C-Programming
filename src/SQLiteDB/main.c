#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>

int verifacte(const int conn, const char *text, sqlite3 *db)
{
    if (conn != SQLITE_OK)
    {
        fprintf(stderr, text, sqlite3_errmsg(db));
        sqlite3_close(db);

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

int main(int argc, char const *argv[])
{
    printf("version: %s\n", sqlite3_libversion());

    sqlite3 *db;
    sqlite3_stmt *res;
    char *error_msg = 0;

    // Try to open the database. If couldn't close the database.
    int conn = sqlite3_open("test2.db", &db);
    if (conn != SQLITE_OK)
    {
        fprintf(stderr, "Could'nt open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);

        return EXIT_FAILURE;
    }

    char *sql = "CREATE TABLE IF NOT EXISTS Cars(Id INT, Name TEXT, Price INT);"
                "INSERT INTO Cars VALUES(1, 'Audi', 52642);"
                "INSERT INTO Cars VALUES(2, 'Mercedes', 57127);"
                "INSERT INTO Cars VALUES(3, 'Skoda', 9000);"
                "INSERT INTO Cars VALUES(4, 'Volvo', 29000);"
                "INSERT INTO Cars VALUES(5, 'Bentley', 350000);"
                "INSERT INTO Cars VALUES(6, 'Citroen', 21000);"
                "INSERT INTO Cars VALUES(7, 'Hummer', 41400);"
                "INSERT INTO Cars VALUES(8, 'Volkswagen', 21600);";

    conn = sqlite3_exec(db, sql, 0, 0, &error_msg);

    // Try to make a connection to the database. If couldn't close the database.
    conn = sqlite3_prepare_v2(db, "SELECT SQLITE_VERSION()", -1, &res, 0);
    verifacte(conn, "Couldn't fetch data %s.\n", db);

    return 0;
}
