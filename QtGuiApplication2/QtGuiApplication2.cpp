#include "QtGuiApplication2.h"

using namespace std;

QtGuiApplication2::QtGuiApplication2(QWidget *parent)
	: QMainWindow(parent){
	ui->setupUi(this);
	readerDCMSeries = vtkSmartPointer<vtkDICOMImageReader>::New();
	imageViewer = vtkSmartPointer<vtkImageViewer2>::New();

	connect(this->ui->actionOpen_Data_Set, SIGNAL(triggered()), this, SLOT(openDataSet()));
}


void QtGuiApplication2::drawDCMSeries(std::string folderDCM) {
	readerDCMSeries->SetDirectoryName(folderDCM.c_str());
	readerDCMSeries->Update();
	imageViewer->SetInputConnection(readerDCMSeries->GetOutputPort());
	/*mMinSliderX = imageViewer->GetSliceMin();
	mMaxSliderX = imageViewer->GetSliceMax();
	ui->hSliderDCM->setMinimum(mMinSliderX);
	ui->hSliderDCM->setMaximum(mMaxSliderX);*/
	imageViewer->SetRenderWindow(ui->widget_axial->GetRenderWindow());
}

void QtGuiApplication2::openDataSet() {
	QString folderNameDCM = QFileDialog::getExistingDirectory(this, tr("Open DCM Folder"), QDir::currentPath());
	std::string fileStd = folderNameDCM.toStdString();
	drawDCMSeries(fileStd);
}