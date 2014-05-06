/****************************************************************************
** Meta object code from reading C++ file 'ampsOperationProjInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Operation/ampsOperationProjInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ampsOperationProjInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ampsOperationProjInfo_t {
    QByteArrayData data[25];
    char stringdata[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ampsOperationProjInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ampsOperationProjInfo_t qt_meta_stringdata_ampsOperationProjInfo = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 19),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 2),
QT_MOC_LITERAL(4, 46, 22),
QT_MOC_LITERAL(5, 69, 11),
QT_MOC_LITERAL(6, 81, 8),
QT_MOC_LITERAL(7, 90, 11),
QT_MOC_LITERAL(8, 102, 23),
QT_MOC_LITERAL(9, 126, 12),
QT_MOC_LITERAL(10, 139, 11),
QT_MOC_LITERAL(11, 151, 18),
QT_MOC_LITERAL(12, 170, 19),
QT_MOC_LITERAL(13, 190, 19),
QT_MOC_LITERAL(14, 210, 21),
QT_MOC_LITERAL(15, 232, 6),
QT_MOC_LITERAL(16, 239, 22),
QT_MOC_LITERAL(17, 262, 21),
QT_MOC_LITERAL(18, 284, 27),
QT_MOC_LITERAL(19, 312, 24),
QT_MOC_LITERAL(20, 337, 11),
QT_MOC_LITERAL(21, 349, 7),
QT_MOC_LITERAL(22, 357, 24),
QT_MOC_LITERAL(23, 382, 21),
QT_MOC_LITERAL(24, 404, 18)
    },
    "ampsOperationProjInfo\0GetProjInfoFinished\0"
    "\0ok\0FinishDownloadOneAsset\0std::string\0"
    "filename\0folder_name\0GetProjInfoNetworkReply\0"
    "AMPSNetwork*\0ampsNetwork\0GetRootFolderReply\0"
    "GetChildFolderReply\0GetFolderAssetReply\0"
    "FolderTreeViewClicked\0mindex\0"
    "FolderTreeViewExpanded\0FolderTreeItemClicked\0"
    "FolderTreeItemDoubleClicked\0"
    "DoCopyFromDropToTreeView\0QDropEvent*\0"
    "d_event\0DoCopyFromDropToItemView\0"
    "DownloadOneAssetReply\0DownloadAssetReply\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ampsOperationProjInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       4,    2,   87,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    1,   92,    2, 0x0a,
      11,    1,   95,    2, 0x0a,
      12,    1,   98,    2, 0x0a,
      13,    1,  101,    2, 0x0a,
      14,    1,  104,    2, 0x0a,
      16,    1,  107,    2, 0x0a,
      17,    1,  110,    2, 0x0a,
      18,    1,  113,    2, 0x0a,
      19,    1,  116,    2, 0x0a,
      22,    1,  119,    2, 0x0a,
      23,    1,  122,    2, 0x0a,
      24,    1,  125,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void ampsOperationProjInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ampsOperationProjInfo *_t = static_cast<ampsOperationProjInfo *>(_o);
        switch (_id) {
        case 0: _t->GetProjInfoFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->FinishDownloadOneAsset((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 2: _t->GetProjInfoNetworkReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 3: _t->GetRootFolderReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 4: _t->GetChildFolderReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 5: _t->GetFolderAssetReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 6: _t->FolderTreeViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->FolderTreeViewExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->FolderTreeItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->FolderTreeItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->DoCopyFromDropToTreeView((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 11: _t->DoCopyFromDropToItemView((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 12: _t->DownloadOneAssetReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        case 13: _t->DownloadAssetReply((*reinterpret_cast< AMPSNetwork*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AMPSNetwork* >(); break;
            }
            break;
        case 3:
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AMPSNetwork* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AMPSNetwork* >(); break;
            }
            break;
        case 13:
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
            typedef void (ampsOperationProjInfo::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsOperationProjInfo::GetProjInfoFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (ampsOperationProjInfo::*_t)(std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ampsOperationProjInfo::FinishDownloadOneAsset)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ampsOperationProjInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ampsOperationProjInfo.data,
      qt_meta_data_ampsOperationProjInfo,  qt_static_metacall, 0, 0}
};


const QMetaObject *ampsOperationProjInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ampsOperationProjInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ampsOperationProjInfo.stringdata))
        return static_cast<void*>(const_cast< ampsOperationProjInfo*>(this));
    if (!strcmp(_clname, "ampsOperationBase"))
        return static_cast< ampsOperationBase*>(const_cast< ampsOperationProjInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int ampsOperationProjInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ampsOperationProjInfo::GetProjInfoFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ampsOperationProjInfo::FinishDownloadOneAsset(std::string _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
