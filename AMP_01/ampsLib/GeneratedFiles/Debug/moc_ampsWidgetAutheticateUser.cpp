/****************************************************************************
** Meta object code from reading C++ file 'ampsWidgetAutheticateUser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GUI/ampsWidgetAutheticateUser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ampsWidgetAutheticateUser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ampsWidgetAutheticateUser_t {
    QByteArrayData data[14];
    char stringdata[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ampsWidgetAutheticateUser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ampsWidgetAutheticateUser_t qt_meta_stringdata_ampsWidgetAutheticateUser = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 11),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 11),
QT_MOC_LITERAL(4, 51, 6),
QT_MOC_LITERAL(5, 58, 6),
QT_MOC_LITERAL(6, 65, 9),
QT_MOC_LITERAL(7, 75, 13),
QT_MOC_LITERAL(8, 89, 15),
QT_MOC_LITERAL(9, 105, 16),
QT_MOC_LITERAL(10, 122, 14),
QT_MOC_LITERAL(11, 137, 15),
QT_MOC_LITERAL(12, 153, 18),
QT_MOC_LITERAL(13, 172, 19)
    },
    "ampsWidgetAutheticateUser\0SelectLogin\0"
    "\0CancelLogin\0ShowUI\0HideUI\0OkPressed\0"
    "CancelPressed\0EnableButtonAll\0"
    "DisableButtonAll\0EnableOkButton\0"
    "DisableOkButton\0EnableCancelButton\0"
    "DisableCancelButton\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ampsWidgetAutheticateUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06,
       3,    0,   75,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    0,   78,    2, 0x0a,
       7,    0,   79,    2, 0x0a,
       8,    0,   80,    2, 0x0a,
       9,    0,   81,    2, 0x0a,
      10,    0,   82,    2, 0x0a,
      11,    0,   83,    2, 0x0a,
      12,    0,   84,    2, 0x0a,
      13,    0,   85,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void ampsWidgetAutheticateUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ampsWidgetAutheticateUser *_t = static_cast<ampsWidgetAutheticateUser *>(_o);
        switch (_id) {
        case 0: _t->SelectLogin(); break;
        case 1: _t->CancelLogin(); break;
        case 2: _t->ShowUI(); break;
        case 3: _t->HideUI(); break;
        case 4: _t->OkPressed(); break;
        case 5: _t->CancelPressed(); break;
        case 6: _t->EnableButtonAll(); break;
        case 7: _t->DisableButtonAll(); break;
        case 8: _t->EnableOkButton(); break;
        case 9: _t->DisableOkButton(); break;
        case 10: _t->EnableCancelButton(); break;
        case 11: _t->DisableCancelButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ampsWidgetAutheticateUser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsWidgetAutheticateUser::SelectLogin)) {
                *result = 0;
            }
        }
        {
            typedef void (ampsWidgetAutheticateUser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsWidgetAutheticateUser::CancelLogin)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ampsWidgetAutheticateUser::staticMetaObject = {
    { &MgWidget::staticMetaObject, qt_meta_stringdata_ampsWidgetAutheticateUser.data,
      qt_meta_data_ampsWidgetAutheticateUser,  qt_static_metacall, 0, 0}
};


const QMetaObject *ampsWidgetAutheticateUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ampsWidgetAutheticateUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ampsWidgetAutheticateUser.stringdata))
        return static_cast<void*>(const_cast< ampsWidgetAutheticateUser*>(this));
    return MgWidget::qt_metacast(_clname);
}

int ampsWidgetAutheticateUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MgWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ampsWidgetAutheticateUser::SelectLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ampsWidgetAutheticateUser::CancelLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
