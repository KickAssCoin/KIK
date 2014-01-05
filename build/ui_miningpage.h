/********************************************************************************
** Form generated from reading UI file 'miningpage.ui'
**
** Created: Sun Jan 5 01:33:59 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGPAGE_H
#define UI_MININGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MiningPage
{
public:
    QGridLayout *gridLayout;
    QLineEdit *serverLine;
    QPushButton *startButton;
    QLabel *mineSpeedLabel;
    QLabel *shareCount;
    QLineEdit *passwordLine;
    QCheckBox *debugCheckBox;
    QLineEdit *portLine;
    QSpinBox *scantimeBox;
    QListWidget *list;
    QComboBox *typeBox;
    QLineEdit *usernameLine;
    QSpinBox *threadsBox;
    QWebView *webView;

    void setupUi(QWidget *MiningPage)
    {
        if (MiningPage->objectName().isEmpty())
            MiningPage->setObjectName(QString::fromUtf8("MiningPage"));
        MiningPage->resize(1005, 502);
        gridLayout = new QGridLayout(MiningPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        serverLine = new QLineEdit(MiningPage);
        serverLine->setObjectName(QString::fromUtf8("serverLine"));
        serverLine->setEnabled(true);

        gridLayout->addWidget(serverLine, 5, 0, 1, 1);

        startButton = new QPushButton(MiningPage);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(startButton, 0, 1, 1, 1);

        mineSpeedLabel = new QLabel(MiningPage);
        mineSpeedLabel->setObjectName(QString::fromUtf8("mineSpeedLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mineSpeedLabel->sizePolicy().hasHeightForWidth());
        mineSpeedLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        mineSpeedLabel->setFont(font);
        mineSpeedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mineSpeedLabel, 15, 3, 1, 5);

        shareCount = new QLabel(MiningPage);
        shareCount->setObjectName(QString::fromUtf8("shareCount"));
        shareCount->setFont(font);

        gridLayout->addWidget(shareCount, 15, 1, 1, 2);

        passwordLine = new QLineEdit(MiningPage);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setEnabled(true);

        gridLayout->addWidget(passwordLine, 4, 1, 1, 1);

        debugCheckBox = new QCheckBox(MiningPage);
        debugCheckBox->setObjectName(QString::fromUtf8("debugCheckBox"));
        debugCheckBox->setEnabled(false);
        debugCheckBox->setChecked(true);

        gridLayout->addWidget(debugCheckBox, 5, 3, 1, 1);

        portLine = new QLineEdit(MiningPage);
        portLine->setObjectName(QString::fromUtf8("portLine"));
        portLine->setEnabled(true);
        portLine->setProperty("value", QVariant(9332));

        gridLayout->addWidget(portLine, 5, 1, 1, 1);

        scantimeBox = new QSpinBox(MiningPage);
        scantimeBox->setObjectName(QString::fromUtf8("scantimeBox"));
        scantimeBox->setEnabled(false);
        scantimeBox->setKeyboardTracking(false);
        scantimeBox->setMinimum(1);
        scantimeBox->setValue(10);

        gridLayout->addWidget(scantimeBox, 4, 3, 1, 1);

        list = new QListWidget(MiningPage);
        list->setObjectName(QString::fromUtf8("list"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(list->sizePolicy().hasHeightForWidth());
        list->setSizePolicy(sizePolicy2);
        list->setFrameShape(QFrame::Box);
        list->setAutoScrollMargin(100000);
        list->setDragDropMode(QAbstractItemView::DragOnly);
        list->setSelectionMode(QAbstractItemView::NoSelection);
        list->setMovement(QListView::Snap);
        list->setBatchSize(10);

        gridLayout->addWidget(list, 13, 0, 1, 4);

        typeBox = new QComboBox(MiningPage);
        typeBox->setObjectName(QString::fromUtf8("typeBox"));
        typeBox->setMaximumSize(QSize(197, 16777215));
        typeBox->setEditable(false);

        gridLayout->addWidget(typeBox, 0, 0, 1, 1);

        usernameLine = new QLineEdit(MiningPage);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));
        usernameLine->setEnabled(true);

        gridLayout->addWidget(usernameLine, 4, 0, 1, 1);

        threadsBox = new QSpinBox(MiningPage);
        threadsBox->setObjectName(QString::fromUtf8("threadsBox"));
        threadsBox->setEnabled(false);
        threadsBox->setMinimum(1);
        threadsBox->setMaximum(99);
        threadsBox->setSingleStep(1);

        gridLayout->addWidget(threadsBox, 0, 3, 1, 1);

        webView = new QWebView(MiningPage);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setEnabled(true);
        sizePolicy1.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        webView->setFont(font1);
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setUrl(QUrl(QString::fromUtf8("http://127.0.0.1:55880/static/")));
        webView->setZoomFactor(0.6);
        webView->setRenderHints(QPainter::HighQualityAntialiasing|QPainter::NonCosmeticDefaultPen|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);

        gridLayout->addWidget(webView, 14, 0, 1, 4);


        retranslateUi(MiningPage);

        typeBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MiningPage);
    } // setupUi

    void retranslateUi(QWidget *MiningPage)
    {
        MiningPage->setWindowTitle(QApplication::translate("MiningPage", "Mining", 0, QApplication::UnicodeUTF8));
        serverLine->setText(QApplication::translate("MiningPage", "Server", 0, QApplication::UnicodeUTF8));
        serverLine->setPlaceholderText(QApplication::translate("MiningPage", "Server", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MiningPage", "Start Mining", 0, QApplication::UnicodeUTF8));
        mineSpeedLabel->setText(QString());
        shareCount->setText(QString());
        passwordLine->setText(QApplication::translate("MiningPage", "Password", 0, QApplication::UnicodeUTF8));
        passwordLine->setPlaceholderText(QApplication::translate("MiningPage", "Password", 0, QApplication::UnicodeUTF8));
        debugCheckBox->setText(QApplication::translate("MiningPage", "Debug Logging", 0, QApplication::UnicodeUTF8));
        portLine->setText(QApplication::translate("MiningPage", "Port", 0, QApplication::UnicodeUTF8));
        portLine->setPlaceholderText(QApplication::translate("MiningPage", "Port", 0, QApplication::UnicodeUTF8));
        typeBox->clear();
        typeBox->insertItems(0, QStringList()
         << QApplication::translate("MiningPage", "Solo Mining", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MiningPage", "Pool Mining", 0, QApplication::UnicodeUTF8)
        );
        usernameLine->setInputMask(QString());
        usernameLine->setText(QString());
        usernameLine->setPlaceholderText(QApplication::translate("MiningPage", "User Name", 0, QApplication::UnicodeUTF8));
        threadsBox->setSuffix(QString());
#ifndef QT_NO_TOOLTIP
        webView->setToolTip(QApplication::translate("MiningPage", "Start the pool for this to populate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MiningPage: public Ui_MiningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGPAGE_H
