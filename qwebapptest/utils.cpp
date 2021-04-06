#pragma once

#include "utils.h"
#include <QtCore/qdiriterator.h>
#include <QtWidgets/qapplication.h>

namespace utils
{
	// find mainwindow of ts
	QMainWindow* findMainWindow()
	{
		foreach(QWidget * widget, qApp->topLevelWidgets())
		{
			if (QMainWindow* m = qobject_cast<QMainWindow*>(widget))
			{
				return m;
			}
		}
		return nullptr;
	}

	// find widget by object name
	QWidget* findWidget(const QString& name, QWidget* parent)
	{
		QList<QWidget*> children = parent->findChildren<QWidget*>();
		for (int i = 0; i < children.count(); ++i)
		{
			if (children[i]->objectName() == name)
			{
				return children[i];
			}
		}
		return nullptr;
	}
}
