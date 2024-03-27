/****************************************************************************
** Meta object code from reading C++ file 'figure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Desktop/MiniProject-Profile-main/Chess/figures/figure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'figure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Figure_t {
    QByteArrayData data[14];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Figure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Figure_t qt_meta_stringdata_Figure = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Figure"
QT_MOC_LITERAL(1, 7, 5), // "vahue"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "Figure*"
QT_MOC_LITERAL(4, 22, 6), // "figure"
QT_MOC_LITERAL(5, 29, 22), // "updateFiguresPositions"
QT_MOC_LITERAL(6, 52, 17), // "signalAboutMoving"
QT_MOC_LITERAL(7, 70, 24), // "sendSnippetWithKingWHITE"
QT_MOC_LITERAL(8, 95, 15), // "QVector<Block*>"
QT_MOC_LITERAL(9, 111, 3), // "vec"
QT_MOC_LITERAL(10, 115, 24), // "sendSnippetWithKingBLACK"
QT_MOC_LITERAL(11, 140, 13), // "getAllFigures"
QT_MOC_LITERAL(12, 154, 33), // "QVector<QPair<Figure*,QPointF..."
QT_MOC_LITERAL(13, 188, 10) // "collection"

    },
    "Figure\0vahue\0\0Figure*\0figure\0"
    "updateFiguresPositions\0signalAboutMoving\0"
    "sendSnippetWithKingWHITE\0QVector<Block*>\0"
    "vec\0sendSnippetWithKingBLACK\0getAllFigures\0"
    "QVector<QPair<Figure*,QPointF> >&\0"
    "collection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Figure[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,
      10,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void Figure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Figure *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vahue((*reinterpret_cast< Figure*(*)>(_a[1]))); break;
        case 1: _t->updateFiguresPositions((*reinterpret_cast< Figure*(*)>(_a[1]))); break;
        case 2: _t->signalAboutMoving(); break;
        case 3: _t->sendSnippetWithKingWHITE((*reinterpret_cast< QVector<Block*>(*)>(_a[1]))); break;
        case 4: _t->sendSnippetWithKingBLACK((*reinterpret_cast< QVector<Block*>(*)>(_a[1]))); break;
        case 5: _t->getAllFigures((*reinterpret_cast< QVector<QPair<Figure*,QPointF> >(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Figure* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Figure* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Block*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Block*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Figure::*)(Figure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Figure::vahue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Figure::*)(Figure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Figure::updateFiguresPositions)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Figure::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Figure::signalAboutMoving)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Figure::*)(QVector<Block*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Figure::sendSnippetWithKingWHITE)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Figure::*)(QVector<Block*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Figure::sendSnippetWithKingBLACK)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Figure::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Figure.data,
    qt_meta_data_Figure,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Figure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Figure::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Figure.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Figure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Figure::vahue(Figure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Figure::updateFiguresPositions(Figure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Figure::signalAboutMoving()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Figure::sendSnippetWithKingWHITE(QVector<Block*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Figure::sendSnippetWithKingBLACK(QVector<Block*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
