
#pragma once
#include "globalinc.h"

#include <QtWidgets/qmainwindow.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qlistwidget.h>
#include <QtWidgets/qgroupbox>	
#include <QtWidgets/qcheckbox.h>
#include <QtWidgets/qlineedit.h>
#include <QtWebEngineWidgets/qwebengineview.h>
#include <QtWebEngineWidgets/qwebenginepage.h>
#include <QtWebChannel/qwebchannel.h>
#include <QtWebEngine/qtwebengineglobal.h>

class PluginHelper : public QObject
{
	Q_OBJECT

public:
	PluginHelper(const QString& pluginPath, QObject* parent = nullptr);

private slots:
	void handleButton();

private:
	QMainWindow* parentwindow;
	QTabWidget* chatTabWidget;
	QTextEdit* chatLineEdit;
	QToolButton* emoticonButton;
	QPushButton* m_button;
	QListWidget* ListWidget;
	QListWidget* ListWidget_2;
	QPushButton* pushButton;
	QPushButton* pushButton_2;
	QLabel* label;
	QLabel* label_2;
	QLineEdit* lineEdit;
	QLabel* label_3;
	QPushButton* pushButton_3;
	QGroupBox* groupBox;
	QCheckBox* checkBox;
	QPushButton* pushButton_4;
	QHBoxLayout* backdrop = new QHBoxLayout;
	QVBoxLayout* vLayout;
	QWebEngineView* view;


	/*
	TsWebObject* wObject;
	ConfigWidget* config;
	FileTransferListWidget* transfers;
	QMenu* chatMenu;
	ChatWidget* chat;
	*/
	void initUi();
	void insertMenu();
	void handlelineedit();

};
