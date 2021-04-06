
#include "pluginhelper.h"
#include <QtWebEngineWidgets/qwebengineview.h>
#include <QtWebEngineWidgets/qwebenginepage.h>
#include <QtWebChannel/qwebchannel.h>
#include <QtWebEngine/qtwebengineglobal.h>
#include <QtWidgets/qmainwindow.h>
#include "utils.h"



//remember to compile moc in header file

//ChatWidget::ChatWidget(const QString& path, TsWebObject* webObject, QWidget *parent)
//create new widget and insert it into infoframe

PluginHelper::PluginHelper(const QString& pluginPath, QObject* parent)
	:QObject(parent)
{
	QTimer::singleShot(0, this, [=]() { initUi(); });

}
//finds mainwindow and initiates the menuitem
void PluginHelper::initUi()
{

	parentwindow = utils::findMainWindow();
	connect(parentwindow, SIGNAL(callPrintConsoleMessage(uint64, QString, int)), this, SLOT(onPrintConsoleMessage(uint64, QString, int)));
	connect(parentwindow, SIGNAL(callPrintConsoleMessageToCurrentTab(QString)), this, SLOT(onPrintConsoleMessageToCurrentTab(QString)));

	QWidget* infoframe = utils::findWidget("InfoFrame", parentwindow);

	view = new QWebEngineView(infoframe);
	vLayout = new QVBoxLayout(infoframe);
	vLayout->setSpacing(1);
	vLayout->setContentsMargins(1, 1, 1, 1);
	vLayout->setObjectName(QStringLiteral("vLayout"));
	view->load(QUrl("https://test.webrtc.org/"));
	vLayout->addWidget(view);


	insertMenu();

}

void PluginHelper::handleButton()
{
	// change the text
	m_button->setText("Example");
	// resize button
	m_button->resize(100, 100);
}

void PluginHelper::handlelineedit()
{
	// change the text
	lineEdit->setFocus();

}

void PluginHelper::insertMenu()
{

	QMenu* chatMenus = new QMenu("EPICMENU");
	QAction* settingss = new QAction("&RISEUP", chatMenus);
	chatMenus->addAction(settingss);


	QMenuBar* menubars = parentwindow->menuBar();

	menubars->insertMenu(menubars->actions().last(), chatMenus);


}
