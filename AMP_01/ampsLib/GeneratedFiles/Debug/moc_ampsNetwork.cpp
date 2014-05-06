/****************************************************************************
** Meta object code from reading C++ file 'ampsNetwork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Comm/ampsNetwork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ampsNetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AMPSNetwork_t {
    QByteArrayData data[14];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AMPSNetwork_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AMPSNetwork_t qt_meta_stringdata_AMPSNetwork = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 8),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 17),
QT_MOC_LITERAL(4, 40, 12),
QT_MOC_LITERAL(5, 53, 4),
QT_MOC_LITERAL(6, 58, 14),
QT_MOC_LITERAL(7, 73, 16),
QT_MOC_LITERAL(8, 90, 13),
QT_MOC_LITERAL(9, 104, 12),
QT_MOC_LITERAL(10, 117, 12),
QT_MOC_LITERAL(11, 130, 14),
QT_MOC_LITERAL(12, 145, 17),
QT_MOC_LITERAL(13, 163, 16)
    },
    "AMPSNetwork\0finished\0\0AMPSNetworkReply*\0"
    "AMPSNetwork*\0self\0uploadProgress\0"
    "downloadProgress\0FileReadyRead\0"
    "networkError\0networkReply\0requestTimeout\0"
    "downloadReadyRead\0downloadFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AMPSNetwork[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06,
       1,    1,   77,    2, 0x06,
       6,    3,   80,    2, 0x06,
       7,    3,   87,    2, 0x06,
       8,    1,   94,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   97,    2, 0x08,
      10,    0,   98,    2, 0x08,
      11,    0,   99,    2, 0x08,
      12,    0,  100,    2, 0x08,
      13,    0,  101,    2, 0x08,
       6,    2,  102,    2, 0x08,
       7,    2,  107,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::LongLong, QMetaType::LongLong,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void AMPSNetwork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AMPSNetwork *_t = static_cast<AMPSNetwork *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< AMPSNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 4: _t->FileReadyRead((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 5: _t->networkError(); break;
        case 6: _t->networkReply(); break;
        case 7: _t->requestTimeout(); break;
        case 8: _t->downloadReadyRead(); break;
        case 9: _t->downloadFinished(); break;
        case 10: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AMPSNetwork* >(); break;
            }
            break;
        case 4:
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
            typedef void (AMPSNetwork::*_t)(AMPSNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AMPSNetwork::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (AMPSNetwork::*_t)(AMPSNetwork * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AMPSNetwork::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (AMPSNetwork::*_t)(quint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AMPSNetwork::uploadProgress)) {
                *result = 2;
            }
        }
        {
            typedef void (AMPSNetwork::*_t)(quint64 , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AMPSNetwork::downloadProgress)) {
                *result = 3;
            }
        }
        {
            typedef void (AMPSNetwork::*_t)(AMPSNetwork * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AMPSNetwork::FileReadyRead)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject AMPSNetwork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AMPSNetwork.data,
      qt_meta_data_AMPSNetwork,  qt_static_metacall, 0, 0}
};


const QMetaObject *AMPSNetwork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AMPSNetwork::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AMPSNetwork.stringdata))
        return static_cast<void*>(const_cast< AMPSNetwork*>(this));
    return QObject::qt_metacast(_clname);
}

int AMPSNetwork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AMPSNetwork::finished(AMPSNetworkReply * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AMPSNetwork::finished(AMPSNetwork * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AMPSNetwork::uploadProgress(quint64 _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AMPSNetwork::downloadProgress(quint64 _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AMPSNetwork::FileReadyRead(AMPSNetwork * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
