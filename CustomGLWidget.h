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


/** \file CustomGLWidget.h
 *
 * \brief CustomGLWidget header file
 *
 * This file contains the declaration of the 
 * CustomGLWidget class which controls the capturing
 * and displaying processes of the application.
 */

#ifndef __CustomGLWidget_h
#define __CustomGLWidget_h

#include <QtOpenGL>

//Forward declarations
class QTimer;
struct CvCapture;
struct _IplImage;


//! Class CustomGLWidget
/**
 * This class represents a OpenGL widget capable to display frames
 * captured from a webcam. The class has the responsibility not only
 * for displaying the results, but also controlling the capture process.
 */
class CustomGLWidget: public QGLWidget
{
	Q_OBJECT;

  private:
	QTimer *m_timer;
	CvCapture *m_capture;
	_IplImage *m_image;
				
  public:
	CustomGLWidget(QWidget *parent=NULL);
	~CustomGLWidget();

  protected:
	void initializeGL();
	void paintGL();

				   	
  private slots:
	void captureFrame();
};

#endif
