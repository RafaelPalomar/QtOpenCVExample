/*************************************************************************
   Copyright (c) 2010 Rafael Palomar
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY;
   without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*************************************************************************/


/** \file MainWindow.h
 *
 * \brief MainWindow header file
 *
 * This file contains the declaration of the main window interface
 */

#ifndef __MainWindow_h
#define __MainWindow_h

#include "ui_QtOpenCVExample.h"

//!Class MainWindow
/**
 * This class encapsulates the main window interface which have
 * been created by using Qt Designer.
 */
class MainWindow: public QMainWindow
{
	Q_OBJECT;
	
  private:
	Ui::MainWindow m_gui;
	
  public:
	MainWindow();
	~MainWindow();	
	
};

	

#endif
