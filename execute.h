#include "parse.h"
#ifndef HISTORY_H
#define HISTORY_H
#include "history.h"
#endif
#include <signal.h>
#include <sys/wait.h>

void executeLine(char *input);
void cd(char **args);
char **redirectionParseAndSetup(char **input);
void executeCommand(char **commands, int pipes);
void executeCommandFork(char **commands, int start, int end, int pipeNum);
void closePipes();
int standardOutReal;
int standardInReal;
int status;
int *pipefd;
int pipes;