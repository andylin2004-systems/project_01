#include <sys/stat.h>
#include <limits.h>
#include "parse.h"
#include "execute.h"

int historyFile;
char **history;
int historyLength;

void writeCommandToHistory(char *command);
void readHistory();
void printHistory();
void runHistory(char* input);