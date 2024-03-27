/****************************************************************************
** Meta object code from reading C++ file 'widgettocreatevector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../widgettocreatevector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgettocreatevector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetToCreateVector_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetToCreateVector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetToCreateVector_t qt_meta_stringdata_WidgetToCreateVector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WidgetToCreateVector"
QT_MOC_LITERAL(1, 21, 9), // "sendInfo1"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "str"
QT_MOC_LITERAL(4, 36, 9), // "sendInfo2"
QT_MOC_LITERAL(5, 46, 9), // "sendInfo3"
QT_MOC_LITERAL(6, 56, 8), // "getInfo1"
QT_MOC_LITERAL(7, 65, 8), // "getInfo2"
QT_MOC_LITERAL(8, 74, 8) // "getInfo3"

    },
    "WidgetToCreateVector\0sendInfo1\0\0str\0"
    "sendInfo2\0sendInfo3\0getInfo1\0getInfo2\0"
    "getInfo3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetToCreateVector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetToCreateVector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetToCreateVector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInfo1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendInfo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendInfo3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getInfo1(); break;
        case 4: _t->getInfo2(); break;
        case 5: _t->getInfo3(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetToCreateVector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetToCreateVector::sendInfo1)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WidgetToCreateVector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetToCreateVector::sendInfo2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WidgetToCreateVector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetToCreateVector::sendInfo3)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetToCreateVector::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetToCreateVector.data,
    qt_meta_data_WidgetToCreateVector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetToCreateVector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetToCreateVector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetToCreateVector.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetToCreateVector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WidgetToCreateVector::sendInfo1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetToCreateVector::sendInfo2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WidgetToCreateVector::sendInfo3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
