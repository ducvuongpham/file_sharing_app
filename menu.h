#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "config.h"
#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_RESET "\x1b[0m"

int validate_login(char *email, char *password);
void login_page();
void home_page();
void profile_page();
void group_info_page();
void admin_page();
void share_group_page();