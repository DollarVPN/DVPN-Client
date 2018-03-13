/****************************************************************************
** Meta object code from reading C++ file 'trayiconmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../trayiconmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trayiconmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrayIconManager_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrayIconManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrayIconManager_t qt_meta_stringdata_TrayIconManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TrayIconManager"
QT_MOC_LITERAL(1, 16, 5), // "login"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "logout"
QT_MOC_LITERAL(4, 30, 15), // "connectToServer"
QT_MOC_LITERAL(5, 46, 8), // "serverId"
QT_MOC_LITERAL(6, 55, 15), // "quitApplication"
QT_MOC_LITERAL(7, 71, 14), // "aboutTriggered"
QT_MOC_LITERAL(8, 86, 14), // "closeTriggered"
QT_MOC_LITERAL(9, 101, 13), // "showTriggered"
QT_MOC_LITERAL(10, 115, 15), // "updateStateIcon"
QT_MOC_LITERAL(11, 131, 15), // "actionActivated"
QT_MOC_LITERAL(12, 147, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(13, 181, 6) // "reason"

    },
    "TrayIconManager\0login\0\0logout\0"
    "connectToServer\0serverId\0quitApplication\0"
    "aboutTriggered\0closeTriggered\0"
    "showTriggered\0updateStateIcon\0"
    "actionActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrayIconManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void TrayIconManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrayIconManager *_t = static_cast<TrayIconManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->logout(); break;
        case 2: _t->connectToServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->quitApplication(); break;
        case 4: _t->aboutTriggered(); break;
        case 5: _t->closeTriggered(); break;
        case 6: _t->showTriggered(); break;
        case 7: _t->updateStateIcon(); break;
        case 8: _t->actionActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TrayIconManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIconManager::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TrayIconManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIconManager::logout)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TrayIconManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIconManager::connectToServer)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TrayIconManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrayIconManager::quitApplication)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject TrayIconManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TrayIconManager.data,
      qt_meta_data_TrayIconManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TrayIconManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrayIconManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrayIconManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TrayIconManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TrayIconManager::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrayIconManager::logout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TrayIconManager::connectToServer(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TrayIconManager::quitApplication()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
