/****************************************************************************
** Meta object code from reading C++ file 'qcppdialogimpl.h'
**
** Created: Sun Jan 25 03:03:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcppdialogimpl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcppdialogimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QCPPDialogImpl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   16,   15,   15, 0x09,
      43,   40,   15,   15, 0x09,
      57,   15,   15,   15, 0x09,
      68,   15,   15,   15, 0x09,
      88,   83,   15,   15, 0x09,
     120,   15,   15,   15, 0x09,
     135,   15,   15,   15, 0x09,
     152,   15,   15,   15, 0x09,
     169,   15,   15,   15, 0x09,
     180,   15,   15,   15, 0x09,
     193,   15,   15,   15, 0x09,
     209,   15,   15,   15, 0x09,
     225,  218,   15,   15, 0x09,
     252,   15,   15,   15, 0x09,
     263,   15,   15,   15, 0x09,
     276,  273,   15,   15, 0x09,
     299,  273,   15,   15, 0x09,
     319,   15,   15,   15, 0x09,
     335,   15,   15,   15, 0x09,
     357,  349,   15,   15, 0x08,
     380,  349,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QCPPDialogImpl[] = {
    "QCPPDialogImpl\0\0AddToList\0execCmd(bool)\0"
    "fd\0readData(int)\0sendFile()\0showAboutMsg()\0"
    "item\0oldCmdClicked(QListWidgetItem*)\0"
    "saveSettings()\0readFromStdout()\0"
    "readFromStderr()\0sendDone()\0connectTTY()\0"
    "disconnectTTY()\0killSz()\0enable\0"
    "enableSettingWidgets(bool)\0doOutput()\0"
    "sendKey()\0on\0hexOutputClicked(bool)\0"
    "enableLogging(bool)\0chooseLogFile()\0"
    "clearOutput()\0checked\0on_m_DTR_clicked(bool)\0"
    "on_m_RTS_clicked(bool)\0"
};

void QCPPDialogImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QCPPDialogImpl *_t = static_cast<QCPPDialogImpl *>(_o);
        switch (_id) {
        case 0: _t->execCmd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->readData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendFile(); break;
        case 3: _t->showAboutMsg(); break;
        case 4: _t->oldCmdClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->saveSettings(); break;
        case 6: _t->readFromStdout(); break;
        case 7: _t->readFromStderr(); break;
        case 8: _t->sendDone(); break;
        case 9: _t->connectTTY(); break;
        case 10: _t->disconnectTTY(); break;
        case 11: _t->killSz(); break;
        case 12: _t->enableSettingWidgets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->doOutput(); break;
        case 14: _t->sendKey(); break;
        case 15: _t->hexOutputClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->enableLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->chooseLogFile(); break;
        case 18: _t->clearOutput(); break;
        case 19: _t->on_m_DTR_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_m_RTS_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QCPPDialogImpl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QCPPDialogImpl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCPPDialogImpl,
      qt_meta_data_QCPPDialogImpl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QCPPDialogImpl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QCPPDialogImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QCPPDialogImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QCPPDialogImpl))
        return static_cast<void*>(const_cast< QCPPDialogImpl*>(this));
    if (!strcmp(_clname, "Ui::mikroComDlg"))
        return static_cast< Ui::mikroComDlg*>(const_cast< QCPPDialogImpl*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCPPDialogImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
