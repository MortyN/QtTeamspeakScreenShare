
#pragma once

#include <QtCore/qtextstream.h>
#include <QtWidgets/qmainwindow.h>
#include "globalinc.h"


namespace utils
{
	QMainWindow* findMainWindow();
	QWidget* findWidget(const QString& name, QWidget* parent);
	QString time();
	void makeEmoteJsonArray(const QString& path);
	QString ts3WeirdBase16(const QString& id);
}
