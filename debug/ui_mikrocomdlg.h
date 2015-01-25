/********************************************************************************
** Form generated from reading UI file 'mikrocomdlg.ui'
**
** Created: Sun Jan 25 03:03:22 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIKROCOMDLG_H
#define UI_MIKROCOMDLG_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mikroComDlg
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter2;
    QFrame *frame3;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QPushButton *m_aboutPb;
    QPushButton *m_connectPb;
    QLabel *textLabel3;
    QPushButton *m_closePb;
    QComboBox *m_dataBitsCb;
    QLabel *textLabel2;
    QPushButton *m_quitPb;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel4;
    QComboBox *m_parityCb;
    QGridLayout *gridLayout1;
    QCheckBox *m_hardwareCb;
    QCheckBox *m_softwareCb;
    QCheckBox *m_writeCb;
    QCheckBox *m_readCb;
    QLabel *textLabel1_3;
    QLabel *textLabel2_2;
    QCheckBox *m_applyCb;
    QCheckBox *m_RTS;
    QLabel *textLabel5;
    QComboBox *m_deviceCb;
    QComboBox *m_baudCb;
    QLabel *textLabel1;
    QCheckBox *m_DTR;
    QComboBox *m_stopCb;
    QTextBrowser *m_outputView;
    QHBoxLayout *hboxLayout1;
    QPushButton *m_clearOutputPb;
    QCheckBox *m_hexOutputCb;
    QCheckBox *m_enableLoggingCb;
    QComboBox *m_logAppendCb;
    QLineEdit *m_logFileLe;
    QPushButton *m_logFileFileDialog;
    QFrame *frame4;
    QVBoxLayout *vboxLayout3;
    QListWidget *m_oldCmdsLb;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1_2;
    QLineEdit *m_cmdLe;
    QHBoxLayout *hboxLayout3;
    QPushButton *m_sendPb;
    QComboBox *m_protoPb;
    QSpacerItem *spacerItem;
    QComboBox *m_inputModeCb;
    QLabel *textLabel1_4;
    QSpinBox *m_charDelaySb;

    void setupUi(QWidget *mikroComDlg)
    {
        if (mikroComDlg->objectName().isEmpty())
            mikroComDlg->setObjectName(QString::fromUtf8("mikroComDlg"));
        mikroComDlg->resize(797, 491);
        QIcon icon;
        icon.addFile(QString::fromUtf8("mikro_50.png"), QSize(), QIcon::Normal, QIcon::Off);
        mikroComDlg->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(mikroComDlg);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter2 = new QSplitter(mikroComDlg);
        splitter2->setObjectName(QString::fromUtf8("splitter2"));
        splitter2->setOrientation(Qt::Vertical);
        frame3 = new QFrame(splitter2);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(frame3->sizePolicy().hasHeightForWidth());
        frame3->setSizePolicy(sizePolicy);
        frame3->setFrameShape(QFrame::NoFrame);
        frame3->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frame3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_aboutPb = new QPushButton(frame3);
        m_aboutPb->setObjectName(QString::fromUtf8("m_aboutPb"));

        gridLayout->addWidget(m_aboutPb, 2, 0, 1, 1);

        m_connectPb = new QPushButton(frame3);
        m_connectPb->setObjectName(QString::fromUtf8("m_connectPb"));

        gridLayout->addWidget(m_connectPb, 0, 0, 1, 1);

        textLabel3 = new QLabel(frame3);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel3->setWordWrap(false);

        gridLayout->addWidget(textLabel3, 2, 1, 1, 1);

        m_closePb = new QPushButton(frame3);
        m_closePb->setObjectName(QString::fromUtf8("m_closePb"));

        gridLayout->addWidget(m_closePb, 1, 0, 1, 1);

        m_dataBitsCb = new QComboBox(frame3);
        m_dataBitsCb->setObjectName(QString::fromUtf8("m_dataBitsCb"));
        m_dataBitsCb->setFrame(true);

        gridLayout->addWidget(m_dataBitsCb, 2, 2, 1, 2);

        textLabel2 = new QLabel(frame3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2->setWordWrap(false);

        gridLayout->addWidget(textLabel2, 1, 1, 1, 1);

        m_quitPb = new QPushButton(frame3);
        m_quitPb->setObjectName(QString::fromUtf8("m_quitPb"));

        gridLayout->addWidget(m_quitPb, 3, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel4 = new QLabel(frame3);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setLayoutDirection(Qt::LeftToRight);
        textLabel4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel4->setWordWrap(false);

        hboxLayout->addWidget(textLabel4);

        m_parityCb = new QComboBox(frame3);
        m_parityCb->setObjectName(QString::fromUtf8("m_parityCb"));

        hboxLayout->addWidget(m_parityCb);


        vboxLayout2->addLayout(hboxLayout);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_hardwareCb = new QCheckBox(frame3);
        m_hardwareCb->setObjectName(QString::fromUtf8("m_hardwareCb"));

        gridLayout1->addWidget(m_hardwareCb, 0, 2, 1, 1);

        m_softwareCb = new QCheckBox(frame3);
        m_softwareCb->setObjectName(QString::fromUtf8("m_softwareCb"));

        gridLayout1->addWidget(m_softwareCb, 0, 1, 1, 1);

        m_writeCb = new QCheckBox(frame3);
        m_writeCb->setObjectName(QString::fromUtf8("m_writeCb"));

        gridLayout1->addWidget(m_writeCb, 1, 2, 1, 1);

        m_readCb = new QCheckBox(frame3);
        m_readCb->setObjectName(QString::fromUtf8("m_readCb"));

        gridLayout1->addWidget(m_readCb, 1, 1, 1, 1);

        textLabel1_3 = new QLabel(frame3);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_3->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_3, 1, 0, 1, 1);

        textLabel2_2 = new QLabel(frame3);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel2_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2_2, 0, 0, 1, 1);


        vboxLayout2->addLayout(gridLayout1);

        m_applyCb = new QCheckBox(frame3);
        m_applyCb->setObjectName(QString::fromUtf8("m_applyCb"));

        vboxLayout2->addWidget(m_applyCb);


        gridLayout->addLayout(vboxLayout2, 0, 6, 4, 1);

        m_RTS = new QCheckBox(frame3);
        m_RTS->setObjectName(QString::fromUtf8("m_RTS"));
        m_RTS->setLayoutDirection(Qt::RightToLeft);
        m_RTS->setAutoFillBackground(false);

        gridLayout->addWidget(m_RTS, 3, 4, 1, 1);

        textLabel5 = new QLabel(frame3);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel5->setWordWrap(false);

        gridLayout->addWidget(textLabel5, 3, 1, 1, 1);

        m_deviceCb = new QComboBox(frame3);
        m_deviceCb->setObjectName(QString::fromUtf8("m_deviceCb"));
        m_deviceCb->setEditable(true);

        gridLayout->addWidget(m_deviceCb, 0, 2, 1, 4);

        m_baudCb = new QComboBox(frame3);
        m_baudCb->setObjectName(QString::fromUtf8("m_baudCb"));

        gridLayout->addWidget(m_baudCb, 1, 2, 1, 4);

        textLabel1 = new QLabel(frame3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 1, 1, 1);

        m_DTR = new QCheckBox(frame3);
        m_DTR->setObjectName(QString::fromUtf8("m_DTR"));
        m_DTR->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(m_DTR, 2, 4, 1, 1);

        m_stopCb = new QComboBox(frame3);
        m_stopCb->setObjectName(QString::fromUtf8("m_stopCb"));

        gridLayout->addWidget(m_stopCb, 3, 2, 1, 2);


        vboxLayout1->addLayout(gridLayout);

        m_outputView = new QTextBrowser(frame3);
        m_outputView->setObjectName(QString::fromUtf8("m_outputView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        m_outputView->setFont(font);

        vboxLayout1->addWidget(m_outputView);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        m_clearOutputPb = new QPushButton(frame3);
        m_clearOutputPb->setObjectName(QString::fromUtf8("m_clearOutputPb"));

        hboxLayout1->addWidget(m_clearOutputPb);

        m_hexOutputCb = new QCheckBox(frame3);
        m_hexOutputCb->setObjectName(QString::fromUtf8("m_hexOutputCb"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_hexOutputCb->sizePolicy().hasHeightForWidth());
        m_hexOutputCb->setSizePolicy(sizePolicy1);

        hboxLayout1->addWidget(m_hexOutputCb);

        m_enableLoggingCb = new QCheckBox(frame3);
        m_enableLoggingCb->setObjectName(QString::fromUtf8("m_enableLoggingCb"));

        hboxLayout1->addWidget(m_enableLoggingCb);

        m_logAppendCb = new QComboBox(frame3);
        m_logAppendCb->setObjectName(QString::fromUtf8("m_logAppendCb"));

        hboxLayout1->addWidget(m_logAppendCb);

        m_logFileLe = new QLineEdit(frame3);
        m_logFileLe->setObjectName(QString::fromUtf8("m_logFileLe"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_logFileLe->sizePolicy().hasHeightForWidth());
        m_logFileLe->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(m_logFileLe);

        m_logFileFileDialog = new QPushButton(frame3);
        m_logFileFileDialog->setObjectName(QString::fromUtf8("m_logFileFileDialog"));

        hboxLayout1->addWidget(m_logFileFileDialog);


        vboxLayout1->addLayout(hboxLayout1);

        splitter2->addWidget(frame3);
        frame4 = new QFrame(splitter2);
        frame4->setObjectName(QString::fromUtf8("frame4"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(frame4->sizePolicy().hasHeightForWidth());
        frame4->setSizePolicy(sizePolicy3);
        frame4->setFrameShape(QFrame::NoFrame);
        frame4->setFrameShadow(QFrame::Plain);
        vboxLayout3 = new QVBoxLayout(frame4);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        m_oldCmdsLb = new QListWidget(frame4);
        m_oldCmdsLb->setObjectName(QString::fromUtf8("m_oldCmdsLb"));
        m_oldCmdsLb->setFont(font);

        vboxLayout3->addWidget(m_oldCmdsLb);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel1_2 = new QLabel(frame4);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_2->setWordWrap(false);

        hboxLayout2->addWidget(textLabel1_2);

        m_cmdLe = new QLineEdit(frame4);
        m_cmdLe->setObjectName(QString::fromUtf8("m_cmdLe"));
        m_cmdLe->setFont(font);

        hboxLayout2->addWidget(m_cmdLe);


        vboxLayout3->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_sendPb = new QPushButton(frame4);
        m_sendPb->setObjectName(QString::fromUtf8("m_sendPb"));
        m_sendPb->setAutoDefault(false);

        hboxLayout3->addWidget(m_sendPb);

        m_protoPb = new QComboBox(frame4);
        m_protoPb->setObjectName(QString::fromUtf8("m_protoPb"));

        hboxLayout3->addWidget(m_protoPb);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem);

        m_inputModeCb = new QComboBox(frame4);
        m_inputModeCb->setObjectName(QString::fromUtf8("m_inputModeCb"));

        hboxLayout3->addWidget(m_inputModeCb);

        textLabel1_4 = new QLabel(frame4);
        textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
        textLabel1_4->setWordWrap(false);

        hboxLayout3->addWidget(textLabel1_4);

        m_charDelaySb = new QSpinBox(frame4);
        m_charDelaySb->setObjectName(QString::fromUtf8("m_charDelaySb"));
        m_charDelaySb->setMaximum(250);
        m_charDelaySb->setValue(1);

        hboxLayout3->addWidget(m_charDelaySb);


        vboxLayout3->addLayout(hboxLayout3);

        splitter2->addWidget(frame4);

        vboxLayout->addWidget(splitter2);

#ifndef QT_NO_SHORTCUT
        textLabel3->setBuddy(m_dataBitsCb);
        textLabel2->setBuddy(m_baudCb);
        textLabel4->setBuddy(m_parityCb);
        textLabel1_3->setBuddy(m_readCb);
        textLabel2_2->setBuddy(m_softwareCb);
        textLabel5->setBuddy(m_stopCb);
        textLabel1->setBuddy(m_deviceCb);
        textLabel1_2->setBuddy(m_cmdLe);
        textLabel1_4->setBuddy(m_charDelaySb);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_connectPb, m_closePb);
        QWidget::setTabOrder(m_closePb, m_aboutPb);
        QWidget::setTabOrder(m_aboutPb, m_quitPb);
        QWidget::setTabOrder(m_quitPb, m_deviceCb);
        QWidget::setTabOrder(m_deviceCb, m_baudCb);
        QWidget::setTabOrder(m_baudCb, m_dataBitsCb);
        QWidget::setTabOrder(m_dataBitsCb, m_stopCb);
        QWidget::setTabOrder(m_stopCb, m_DTR);
        QWidget::setTabOrder(m_DTR, m_RTS);
        QWidget::setTabOrder(m_RTS, m_parityCb);
        QWidget::setTabOrder(m_parityCb, m_softwareCb);
        QWidget::setTabOrder(m_softwareCb, m_hardwareCb);
        QWidget::setTabOrder(m_hardwareCb, m_readCb);
        QWidget::setTabOrder(m_readCb, m_writeCb);
        QWidget::setTabOrder(m_writeCb, m_applyCb);
        QWidget::setTabOrder(m_applyCb, m_outputView);
        QWidget::setTabOrder(m_outputView, m_clearOutputPb);
        QWidget::setTabOrder(m_clearOutputPb, m_hexOutputCb);
        QWidget::setTabOrder(m_hexOutputCb, m_enableLoggingCb);
        QWidget::setTabOrder(m_enableLoggingCb, m_logAppendCb);
        QWidget::setTabOrder(m_logAppendCb, m_logFileLe);
        QWidget::setTabOrder(m_logFileLe, m_logFileFileDialog);
        QWidget::setTabOrder(m_logFileFileDialog, m_oldCmdsLb);
        QWidget::setTabOrder(m_oldCmdsLb, m_cmdLe);
        QWidget::setTabOrder(m_cmdLe, m_sendPb);
        QWidget::setTabOrder(m_sendPb, m_protoPb);
        QWidget::setTabOrder(m_protoPb, m_inputModeCb);
        QWidget::setTabOrder(m_inputModeCb, m_charDelaySb);

        retranslateUi(mikroComDlg);

        m_dataBitsCb->setCurrentIndex(3);
        m_baudCb->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mikroComDlg);
    } // setupUi

    void retranslateUi(QWidget *mikroComDlg)
    {
        mikroComDlg->setWindowTitle(QApplication::translate("mikroComDlg", "mikroCom", 0, QApplication::UnicodeUTF8));
        m_aboutPb->setText(QApplication::translate("mikroComDlg", "&About", 0, QApplication::UnicodeUTF8));
        m_aboutPb->setShortcut(QApplication::translate("mikroComDlg", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_connectPb->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        m_connectPb->setText(QApplication::translate("mikroComDlg", "&Open device", 0, QApplication::UnicodeUTF8));
        m_connectPb->setShortcut(QApplication::translate("mikroComDlg", "Alt+O", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("mikroComDlg", "Data bits:", 0, QApplication::UnicodeUTF8));
        m_closePb->setText(QApplication::translate("mikroComDlg", "Cl&ose device", 0, QApplication::UnicodeUTF8));
        m_closePb->setShortcut(QApplication::translate("mikroComDlg", "Alt+O", 0, QApplication::UnicodeUTF8));
        m_dataBitsCb->clear();
        m_dataBitsCb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "8", 0, QApplication::UnicodeUTF8)
        );
        textLabel2->setText(QApplication::translate("mikroComDlg", "Baud rate:", 0, QApplication::UnicodeUTF8));
        m_quitPb->setText(QApplication::translate("mikroComDlg", "&Quit", 0, QApplication::UnicodeUTF8));
        m_quitPb->setShortcut(QApplication::translate("mikroComDlg", "Alt+Q", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("mikroComDlg", "Parity:", 0, QApplication::UnicodeUTF8));
        m_parityCb->clear();
        m_parityCb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Odd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Even", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Mark", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Space", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        m_hardwareCb->setToolTip(QApplication::translate("mikroComDlg", "Enable Hardware Handshake", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_hardwareCb->setText(QApplication::translate("mikroComDlg", "Hardware", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_softwareCb->setToolTip(QApplication::translate("mikroComDlg", "Enable Software Handshake (XON/XOFF)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_softwareCb->setText(QApplication::translate("mikroComDlg", "Software", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_writeCb->setToolTip(QApplication::translate("mikroComDlg", "Usually you want to use read and write", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_writeCb->setText(QApplication::translate("mikroComDlg", "Writing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_readCb->setToolTip(QApplication::translate("mikroComDlg", "Usually you want to use read and write", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_readCb->setText(QApplication::translate("mikroComDlg", "Reading", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("mikroComDlg", "Open for:", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("mikroComDlg", "Handshake:", 0, QApplication::UnicodeUTF8));
        m_applyCb->setText(QApplication::translate("mikroComDlg", "Apply settings when opening", 0, QApplication::UnicodeUTF8));
        m_RTS->setText(QApplication::translate("mikroComDlg", "RTS", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("mikroComDlg", "Stop bits:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("mikroComDlg", "Device:", 0, QApplication::UnicodeUTF8));
        m_DTR->setText(QApplication::translate("mikroComDlg", "DTR", 0, QApplication::UnicodeUTF8));
        m_stopCb->clear();
        m_stopCb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "2", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        m_clearOutputPb->setToolTip(QApplication::translate("mikroComDlg", "Clear the output window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_clearOutputPb->setText(QApplication::translate("mikroComDlg", "&Clear", 0, QApplication::UnicodeUTF8));
        m_clearOutputPb->setShortcut(QApplication::translate("mikroComDlg", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_hexOutputCb->setToolTip(QApplication::translate("mikroComDlg", "Show the output in hexadecimal format", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_hexOutputCb->setText(QApplication::translate("mikroComDlg", "&Hex output", 0, QApplication::UnicodeUTF8));
        m_hexOutputCb->setShortcut(QApplication::translate("mikroComDlg", "Alt+H", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_enableLoggingCb->setToolTip(QApplication::translate("mikroComDlg", "Enable logging the data to a file. Chose \"Append to\" to append instead overwrite to an existing file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_enableLoggingCb->setText(QString());
        m_logAppendCb->clear();
        m_logAppendCb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "Log to:", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Append to:", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        m_logAppendCb->setToolTip(QApplication::translate("mikroComDlg", "Enable logging the data to a file. Chose \"Append to\" to append instead overwrite to an existing file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_logFileLe->setToolTip(QApplication::translate("mikroComDlg", "The logfile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_logFileFileDialog->setToolTip(QApplication::translate("mikroComDlg", "Open file dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_logFileFileDialog->setText(QApplication::translate("mikroComDlg", "...", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("mikroComDlg", "&Input:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_cmdLe->setToolTip(QApplication::translate("mikroComDlg", "Enter commands here, Ctrl+C, Ctrl+S, Ctrl+Q also work", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_sendPb->setToolTip(QApplication::translate("mikroComDlg", "Select a file to be sent using the specified protocol", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_sendPb->setText(QApplication::translate("mikroComDlg", "Send file...", 0, QApplication::UnicodeUTF8));
        m_protoPb->clear();
        m_protoPb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "Plain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "XModem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "ZModem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "YModem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "1kXModem", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Script", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        m_protoPb->setToolTip(QApplication::translate("mikroComDlg", "Select the transfer protocol", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_inputModeCb->clear();
        m_inputModeCb->insertItems(0, QStringList()
         << QApplication::translate("mikroComDlg", "LF line end", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "CR line end", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "CR,LF line end", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "No line end", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mikroComDlg", "Hex input", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        m_inputModeCb->setToolTip(QApplication::translate("mikroComDlg", "Select the line end termination", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel1_4->setText(QApplication::translate("mikroComDlg", "Char delay:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_charDelaySb->setToolTip(QApplication::translate("mikroComDlg", "Delay between single characters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_charDelaySb->setSuffix(QApplication::translate("mikroComDlg", " ms", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mikroComDlg: public Ui_mikroComDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIKROCOMDLG_H
