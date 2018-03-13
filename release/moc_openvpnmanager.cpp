/****************************************************************************
** Meta object code from reading C++ file 'openvpnmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../openvpnmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openvpnmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenvpnManager_t {
    QByteArrayData data[26];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenvpnManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenvpnManager_t qt_meta_stringdata_OpenvpnManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OpenvpnManager"
QT_MOC_LITERAL(1, 15, 8), // "gotNewIp"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 2), // "ip"
QT_MOC_LITERAL(4, 28, 15), // "socketConnected"
QT_MOC_LITERAL(5, 44, 11), // "socketError"
QT_MOC_LITERAL(6, 56, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 85, 5), // "error"
QT_MOC_LITERAL(8, 91, 15), // "socketReadyRead"
QT_MOC_LITERAL(9, 107, 16), // "reconnectTimeout"
QT_MOC_LITERAL(10, 124, 21), // "openvpnLogfileChanged"
QT_MOC_LITERAL(11, 146, 3), // "pfn"
QT_MOC_LITERAL(12, 150, 10), // "checkState"
QT_MOC_LITERAL(13, 161, 17), // "obfsproxyFinished"
QT_MOC_LITERAL(14, 179, 12), // "processError"
QT_MOC_LITERAL(15, 192, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(16, 215, 14), // "processStarted"
QT_MOC_LITERAL(17, 230, 19), // "processStateChanged"
QT_MOC_LITERAL(18, 250, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(19, 273, 2), // "st"
QT_MOC_LITERAL(20, 276, 15), // "processFinished"
QT_MOC_LITERAL(21, 292, 8), // "exitCode"
QT_MOC_LITERAL(22, 301, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(23, 322, 10), // "exitStatus"
QT_MOC_LITERAL(24, 333, 9), // "logStderr"
QT_MOC_LITERAL(25, 343, 9) // "logStdout"

    },
    "OpenvpnManager\0gotNewIp\0\0ip\0socketConnected\0"
    "socketError\0QAbstractSocket::SocketError\0"
    "error\0socketReadyRead\0reconnectTimeout\0"
    "openvpnLogfileChanged\0pfn\0checkState\0"
    "obfsproxyFinished\0processError\0"
    "QProcess::ProcessError\0processStarted\0"
    "processStateChanged\0QProcess::ProcessState\0"
    "st\0processFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "logStderr\0logStdout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenvpnManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    1,   93,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      20,    2,  105,    2, 0x08 /* Private */,
      24,    0,  110,    2, 0x08 /* Private */,
      25,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 22,   21,   23,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OpenvpnManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenvpnManager *_t = static_cast<OpenvpnManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotNewIp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->socketConnected(); break;
        case 2: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->socketReadyRead(); break;
        case 4: _t->reconnectTimeout(); break;
        case 5: _t->openvpnLogfileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->checkState(); break;
        case 7: _t->obfsproxyFinished(); break;
        case 8: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 9: _t->processStarted(); break;
        case 10: _t->processStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 11: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 12: _t->logStderr(); break;
        case 13: _t->logStdout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OpenvpnManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpenvpnManager::gotNewIp)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OpenvpnManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenvpnManager.data,
      qt_meta_data_OpenvpnManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OpenvpnManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenvpnManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenvpnManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OpenvpnManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OpenvpnManager::gotNewIp(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
