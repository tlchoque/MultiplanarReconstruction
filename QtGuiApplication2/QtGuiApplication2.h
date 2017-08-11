#pragma once

#include<iostream>
#include <sstream>

#include <QtWidgets/QMainWindow>
#include "vtk.h"
#include "ui_QtGuiApplication2.h"

//mine
#include <QFileDialog>
#include <QString>
#include <QStringList>
#include  <QTableWidgetItem>

class QtGuiApplication2 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication2(QWidget *parent = Q_NULLPTR);

private slots:

	virtual void openDataSet();
	void drawDCMSeries(std::string folderDCM);

private:
	Ui_QtGuiApplication2Class *ui;
	vtkSmartPointer<vtkDICOMImageReader> readerDCMSeries;
	vtkSmartPointer<vtkImageViewer2> imageViewer;
};
