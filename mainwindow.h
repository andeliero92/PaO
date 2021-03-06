#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QtCore>
#include "elementdialog.h"
#include "searchdialog.h"
#include "table.h"




class mainwindow: public QMainWindow{
	Q_OBJECT
private:
    essemu& shop;
	QMenu* Menu;
	QAction* New;
	QAction* Close;
	QAction* Open;
	QAction* Save;
	QAction* SaveAs;
	QAction* Exit;
	QMenu* MenuT;
	QAction* NRow;
	QAction* DRow;
	QMenu* MenuS;
	QAction* Search;
	QAction* CloseSearch;
	QStatusBar* sttbar;
	table* tbl;
public:
    mainwindow(essemu& ,QWidget* =0);
public slots:
	void newFile();
	void closeFile();
	void openFile();
	void saveFile();
	void saveasFile();
	void activeSearch();
    void closeSearch();
	void changeState();
	void addElement();
	void close();
};

#endif
