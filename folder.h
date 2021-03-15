#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include <libgen.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <math.h>
#include "config.h"

#define COLOR_RED "\x1b[31m"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_BLUE "\x1b[34m"
#define COLOR_RESET "\x1b[0m"
#define BUFF_SIZE 4096

int check_dir_exist();
void makedir();
void removedir();
void makedir_res();
void removedir_res();
int rmtree();