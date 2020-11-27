#pragma once
#include <stdlib.h>
#include <stdio.h>
#include  "detes.h"
typedef struct _order
{
	char num[11];
	dates date;
	int amount;
}order;