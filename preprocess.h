#ifndef PREPROCESS_H
#define PREPROCESS_H
#include "base.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
void preprocess(char *data, DataBuf *dataBuf, int len, int firstPartLen, DataBuf *lastDataBuf);
static int unFinishedType = 0;
#endif