/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkQtStackedChartSeriesOptions.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/*-------------------------------------------------------------------------
  Copyright 2008 Sandia Corporation.
  Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
  the U.S. Government retains certain rights in this software.
-------------------------------------------------------------------------*/

/// \file vtkQtStackedChartSeriesOptions.h
/// \date February 27, 2008

#ifndef _vtkQtStackedChartSeriesOptions_h
#define _vtkQtStackedChartSeriesOptions_h

#include "vtkQtChartExport.h"
#include "vtkQtChartSeriesOptions.h"


class VTKQTCHART_EXPORT vtkQtStackedChartSeriesOptions :
  public vtkQtChartSeriesOptions
{
  Q_OBJECT

public:
  vtkQtStackedChartSeriesOptions(QObject *parent=0);
  virtual ~vtkQtStackedChartSeriesOptions() {}

  virtual void setStyle(int style, vtkQtChartStyleGenerator *generator);
};

#endif
