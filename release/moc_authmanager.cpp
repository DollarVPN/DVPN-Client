/****************************************************************************
** Meta object code from reading C++ file 'authmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../authmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuthManager_t {
    QByteArrayData data[27];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthManager_t qt_meta_stringdata_AuthManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AuthManager"
QT_MOC_LITERAL(1, 12, 14), // "loginCompleted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "loginError"
QT_MOC_LITERAL(4, 39, 7), // "message"
QT_MOC_LITERAL(5, 47, 15), // "logoutCompleted"
QT_MOC_LITERAL(6, 63, 17), // "serverListsLoaded"
QT_MOC_LITERAL(7, 81, 11), // "untilLoaded"
QT_MOC_LITERAL(8, 93, 5), // "until"
QT_MOC_LITERAL(9, 99, 12), // "amountLoaded"
QT_MOC_LITERAL(10, 112, 6), // "amount"
QT_MOC_LITERAL(11, 119, 11), // "emailLoaded"
QT_MOC_LITERAL(12, 131, 5), // "email"
QT_MOC_LITERAL(13, 137, 11), // "oldIpLoaded"
QT_MOC_LITERAL(14, 149, 5), // "oldIp"
QT_MOC_LITERAL(15, 155, 11), // "newIpLoaded"
QT_MOC_LITERAL(16, 167, 5), // "newIp"
QT_MOC_LITERAL(17, 173, 8), // "setNewIp"
QT_MOC_LITERAL(18, 182, 2), // "ip"
QT_MOC_LITERAL(19, 185, 13), // "loginFinished"
QT_MOC_LITERAL(20, 199, 25), // "processObfsServerNamesXml"
QT_MOC_LITERAL(21, 225, 24), // "processEccServerNamesXml"
QT_MOC_LITERAL(22, 250, 21), // "processAccountTypeXml"
QT_MOC_LITERAL(23, 272, 20), // "processExpirationXml"
QT_MOC_LITERAL(24, 293, 13), // "processDnsXml"
QT_MOC_LITERAL(25, 307, 17), // "processUpdatesXml"
QT_MOC_LITERAL(26, 325, 12) // "processOldIP"

    },
    "AuthManager\0loginCompleted\0\0loginError\0"
    "message\0logoutCompleted\0serverListsLoaded\0"
    "untilLoaded\0until\0amountLoaded\0amount\0"
    "emailLoaded\0email\0oldIpLoaded\0oldIp\0"
    "newIpLoaded\0newIp\0setNewIp\0ip\0"
    "loginFinished\0processObfsServerNamesXml\0"
    "processEccServerNamesXml\0processAccountTypeXml\0"
    "processExpirationXml\0processDnsXml\0"
    "processUpdatesXml\0processOldIP"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    0,  108,    2, 0x06 /* Public */,
       6,    0,  109,    2, 0x06 /* Public */,
       7,    1,  110,    2, 0x06 /* Public */,
       9,    1,  113,    2, 0x06 /* Public */,
      11,    1,  116,    2, 0x06 /* Public */,
      13,    1,  119,    2, 0x06 /* Public */,
      15,    1,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  125,    2, 0x0a /* Public */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    0,  129,    2, 0x08 /* Private */,
      21,    0,  130,    2, 0x08 /* Private */,
      22,    0,  131,    2, 0x08 /* Private */,
      23,    0,  132,    2, 0x08 /* Private */,
      24,    0,  133,    2, 0x08 /* Private */,
      25,    0,  134,    2, 0x08 /* Private */,
      26,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AuthManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AuthManager *_t = static_cast<AuthManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginCompleted(); break;
        case 1: _t->loginError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->logoutCompleted(); break;
        case 3: _t->serverListsLoaded(); break;
        case 4: _t->untilLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->amountLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->emailLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->oldIpLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->newIpLoaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setNewIp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->loginFinished(); break;
        case 11: _t->processObfsServerNamesXml(); break;
        case 12: _t->processEccServerNamesXml(); break;
        case 13: _t->processAccountTypeXml(); break;
        case 14: _t->processExpirationXml(); break;
        case 15: _t->processDnsXml(); break;
        case 16: _t->processUpdatesXml(); break;
        case 17: _t->processOldIP(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::loginCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::loginError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::logoutCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::serverListsLoaded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::untilLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::amountLoaded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::emailLoaded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::oldIpLoaded)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (AuthManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthManager::newIpLoaded)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject AuthManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AuthManager.data,
      qt_meta_data_AuthManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AuthManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuthManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void AuthManager::loginCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AuthManager::loginError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AuthManager::logoutCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AuthManager::serverListsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AuthManager::untilLoaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AuthManager::amountLoaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AuthManager::emailLoaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AuthManager::oldIpLoaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AuthManager::newIpLoaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
