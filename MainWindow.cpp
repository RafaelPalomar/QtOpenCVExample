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


/** \file MainWidnow.cpp
 *
 * \brief this class contaions the implementation for the MainWindow class
 */

#include "MainWindow.h"

/** \brief Constructor
 *
 * This function sets up the MainWindo class by initializing the parent class 
 * (indicating that this window has no parent widgets) and calling the predefined
 * function for setting it up.
 */

MainWindow::MainWindow():QMainWindow(0)
{
	m_gui.setupUi(this);
}


// \brief Destructor
MainWindow::~MainWindow()
{
	
}



