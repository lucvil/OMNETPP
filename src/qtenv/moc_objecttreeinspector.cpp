/****************************************************************************
** Meta object code from reading C++ file 'objecttreeinspector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "objecttreeinspector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objecttreeinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector_t qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector = {
    {
QT_MOC_LITERAL(0, 0, 35), // "omnetpp::qtenv::ObjectTreeIns..."
QT_MOC_LITERAL(1, 36, 7), // "onClick"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 57, 5), // "index"
QT_MOC_LITERAL(5, 63, 13), // "onDoubleClick"
QT_MOC_LITERAL(6, 77, 17), // "createContextMenu"
QT_MOC_LITERAL(7, 95, 3) // "pos"

    },
    "omnetpp::qtenv::ObjectTreeInspector\0"
    "onClick\0\0QModelIndex\0index\0onDoubleClick\0"
    "createContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__ObjectTreeInspector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,    7,

       0        // eod
};

void omnetpp::qtenv::ObjectTreeInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectTreeInspector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onDoubleClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->createContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omnetpp::qtenv::ObjectTreeInspector::staticMetaObject = { {
    QMetaObject::SuperData::link<Inspector::staticMetaObject>(),
    qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector.data,
    qt_meta_data_omnetpp__qtenv__ObjectTreeInspector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omnetpp::qtenv::ObjectTreeInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::ObjectTreeInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__ObjectTreeInspector.stringdata0))
        return static_cast<void*>(this);
    return Inspector::qt_metacast(_clname);
}

int omnetpp::qtenv::ObjectTreeInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Inspector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
