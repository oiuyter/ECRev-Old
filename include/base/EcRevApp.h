//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef EC_REVAPP_H
#define EC_REVAPP_H

#include "MooseApp.h"

class EcRevApp;

template <>
InputParameters validParams<EcRevApp>();

class EcRevApp : public MooseApp
{
public:
  EcRevApp(InputParameters parameters);
  virtual ~EcRevApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s);
};

#endif /* EC_REVAPP_H */
