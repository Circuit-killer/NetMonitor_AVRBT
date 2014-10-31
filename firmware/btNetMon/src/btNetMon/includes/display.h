/*

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include "typedefs.h"

#define DISPLAY_MODE1		0
#define DISPLAY_MODE2		1
#define DISPLAY_MODE_BLANK	255

void display_setMode(byte);
void display_requestBlank(void);
void display_update(s_monitorData*);

#endif /* DISPLAY_H_ */