/****************************************************************************
** Meta object code from reading C++ file 'ampsOperationAllQtGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Operation/ampsOperationAllQtGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ampsOperationAllQtGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ampsOperationAllQtGUI_t {
    QByteArrayData data[13];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ampsOperationAllQtGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ampsOperationAllQtGUI_t qt_meta_stringdata_ampsOperationAllQtGUI = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 19),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 16),
QT_MOC_LITERAL(4, 60, 12),
QT_MOC_LITERAL(5, 73, 13),
QT_MOC_LITERAL(6, 87, 14),
QT_MOC_LITERAL(7, 102, 6),
QT_MOC_LITERAL(8, 109, 14),
QT_MOC_LITERAL(9, 124, 16),
QT_MOC_LITERAL(10, 141, 8),
QT_MOC_LITERAL(11, 150, 8),
QT_MOC_LITERAL(12, 159, 17)
    },
    "ampsOperationAllQtGUI\0RetrieveProjectInfo\0"
    "\0ShowProjSelector\0ShowProjInfo\0"
    "ShowAssetInfo\0UpdateProjInfo\0status\0"
    "SelectDispProj\0QListWidgetItem*\0"
    "sel_item\0DispProj\0RefreshFolderView\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ampsOperationAllQtGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a,
       3,    0,   55,    2, 0x0a,
       4,    0,   56,    2, 0x0a,
       5,    0,   57,    2, 0x0a,
       6,    1,   58,    2, 0x0a,
       8,    1,   61,    2, 0x0a,
      11,    0,   64,    2, 0x0a,
      12,    0,   65,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ampsOperationAllQtGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ampsOperationAllQtGUI *_t = static_cast<ampsOperationAllQtGUI *>(_o);
        switch (_id) {
        case 0: _t->RetrieveProjectInfo(); break;
        case 1: _t->ShowProjSelector(); break;
        case 2: _t->ShowProjInfo(); break;
        case 3: _t->ShowAssetInfo(); break;
        case 4: _t->UpdateProjInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SelectDispProj((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->DispProj(); break;
        case 7: _t->RefreshFolderView(); break;
        default: ;
        }
    }
}

const QMetaObject ampsOperationAllQtGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ampsOperationAllQtGUI.data,
      qt_meta_data_ampsOperationAllQtGUI,  qt_static_metacall, 0, 0}
};


const QMetaObject *ampsOperationAllQtGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ampsOperationAllQtGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ampsOperationAllQtGUI.stringdata))
        return static_cast<void*>(const_cast< ampsOperationAllQtGUI*>(this));
    if (!strcmp(_clname, "ampsOperationBase"))
        return static_cast< ampsOperationBase*>(const_cast< ampsOperationAllQtGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ampsOperationAllQtGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
