/****************************************************************************
** Meta object code from reading C++ file 'scribblearea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scribblearea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scribblearea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScribbleArea_t {
    QByteArrayData data[10];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScribbleArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScribbleArea_t qt_meta_stringdata_ScribbleArea = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ScribbleArea"
QT_MOC_LITERAL(1, 13, 10), // "setPenSize"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "size"
QT_MOC_LITERAL(4, 30, 11), // "setPenColor"
QT_MOC_LITERAL(5, 42, 8), // "penColor"
QT_MOC_LITERAL(6, 51, 10), // "setPenFont"
QT_MOC_LITERAL(7, 62, 5), // "style"
QT_MOC_LITERAL(8, 68, 10), // "setPenText"
QT_MOC_LITERAL(9, 79, 4) // "text"

    },
    "ScribbleArea\0setPenSize\0\0size\0setPenColor\0"
    "penColor\0setPenFont\0style\0setPenText\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScribbleArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QFont,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void ScribbleArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScribbleArea *_t = static_cast<ScribbleArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPenSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPenColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setPenFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 3: _t->setPenText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScribbleArea::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ScribbleArea.data,
    qt_meta_data_ScribbleArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScribbleArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScribbleArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScribbleArea.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScribbleArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
