#ifndef __NEONEXTION_INEXTIONSTRINGVALUED
#define __NEONEXTION_INEXTIONSTRINGVALUED

#include <Arduino.h>
#include "Nextion.h"
#include "INextionWidget.h"
#include "NextionTypes.h"

class INextionStringValued : public virtual INextionWidget
{
public:
  INextionStringValued(Nextion *nex, uint8_t page, uint8_t component,
                       const char *name);

  size_t getText(char *buffer, size_t len);
  bool setText(char *buffer);
};

#endif