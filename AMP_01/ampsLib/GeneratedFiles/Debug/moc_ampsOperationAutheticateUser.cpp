/****************************************************************************
** Meta object code from reading C++ file 'ampsOperationAutheticateUser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Operation/ampsOperationAutheticateUser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ampsOperationAutheticateUser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ampsOperationAutheticateUser_t {
    QByteArrayData data[10];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ampsOperationAutheticateUser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ampsOperationAutheticateUser_t qt_meta_stringdata_ampsOperationAutheticateUser = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 12),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 11),
QT_MOC_LITERAL(4, 55, 3),
QT_MOC_LITERAL(5, 59, 8),
QT_MOC_LITERAL(6, 68, 12),
QT_MOC_LITERAL(7, 81, 16),
QT_MOC_LITERAL(8, 98, 12),
QT_MOC_LITERAL(9, 111, 11)
    },
    "ampsOperationAutheticateUser\0Autheticated\0"
    "\0LoginFailed\0Exe\0ExeLogin\0ExeAutoLogin\0"
    "AutheticateReply\0AMPSNetwork*\0ampsNetwork\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ampsOperationAutheticateUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06,
       3,    0,   45,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a,
       5,    0,   47,    2, 0x0a,
       6,    0,   48,    2, 0x0a,
       7,    1,   49,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void ampsOperationAutheticateUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ampsOperationAutheticateUser *_t = static_cast<ampsOperationAutheticateUser *>(_o);
        switch (_id) {
        case 0: _t->Autheticated(); break;
        case 1: _t->LoginFailed(); break;
        case 2: _t->Exe(); break;
        case 3: _t->ExeLogin(); break;
        case 4: _t->ExeAutoLogin(); break;
        case 5: _t->AutheticateReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AMPSNetwork* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ampsOperationAutheticateUser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsOperationAutheticateUser::Autheticated)) {
                *result = 0;
            }
        }
        {
            typedef void (ampsOperationAutheticateUser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsOperationAutheticateUser::LoginFailed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ampsOperationAutheticateUser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ampsOperationAutheticateUser.data,
      qt_meta_data_ampsOperationAutheticateUser,  qt_static_metacall, 0, 0}
};


const QMetaObject *ampsOperationAutheticateUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ampsOperationAutheticateUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ampsOperationAutheticateUser.stringdata))
        return static_cast<void*>(const_cast< ampsOperationAutheticateUser*>(this));
    if (!strcmp(_clname, "ampsOperationBase"))
        return static_cast< ampsOperationBase*>(const_cast< ampsOperationAutheticateUser*>(this));
    return QObject::qt_metacast(_clname);
}

int ampsOperationAutheticateUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ampsOperationAutheticateUser::Autheticated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ampsOperationAutheticateUser::LoginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
