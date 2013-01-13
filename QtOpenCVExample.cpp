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

/** \file QtOpenCVExample.cpp
 *
 * \brief QtOpenCVExample main file
 *
 * This file contains the entry point to the application
 * 
 */

/*! \mainpage QtOpenCVExample
 *
 * This example application illustrates the integration of OpenCV webcam captures
 * with the Qt framework. The application consist of a simple interface showing
 * the webcam captures. Notice that the capture is set for the 0 device index that
 * could be necessary to change in some systems.
 *
 * The key technologies used have been:
 * <ul>
 * <li>OpenCV for capturing the images from the webcam.</li>
 * <li>Qt for controlling the user interface and events.</li>
 * <li>OpenGL for viewing the results.</li>
 */

#include <QtGui>

#include "MainWindow.h"

//!Entry point
/**
 * This is the main function that initializes que Qt application, creates
 * the manin window and starts the application.
 *
 * \param arg argc number of arguments (expected to be 1, but no controls on it)
 *
 * \param argv array of arguments (expected to be empty, but no controls on it)
 *
 * \return execution code from Qt framework
 */
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	MainWindow *mainWindow = new MainWindow();
	
	mainWindow->show();

	return app.exec();
}
