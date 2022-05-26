/********************************************************************************
** Form generated from reading UI file 'soduko.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SODUKO_H
#define UI_SODUKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_soduko
{
public:

    void setupUi(QWidget *soduko)
    {
        if (soduko->objectName().isEmpty())
            soduko->setObjectName(QString::fromUtf8("soduko"));
        soduko->resize(829, 579);

        retranslateUi(soduko);

        QMetaObject::connectSlotsByName(soduko);
    } // setupUi

    void retranslateUi(QWidget *soduko)
    {
        soduko->setWindowTitle(QApplication::translate("soduko", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class soduko: public Ui_soduko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SODUKO_H
