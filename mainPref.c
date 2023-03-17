/*
 File: mainPref.c
 Authors: Kristaps Melbardis (k.t.melbardis@student.rug.nl), Tareq Ahrari (t.ahrari@student.rug.nl)
 Description: Program that outputs expressions with brackets, and if the expression is not numerical, also its value
*/


#include "scanner.h"
#include "prefixExp.h"

int main(int argc, char *argv[]) {
  prefExpTrees();
  return 0;
}
