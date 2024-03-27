/****************************************************************************
** Meta object code from reading C++ file 'pawn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Desktop/MiniProject-Profile-main/Chess/figures/pawn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pawn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pawn_t {
    QByteArrayData data[15];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pawn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pawn_t qt_meta_stringdata_Pawn = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Pawn"
QT_MOC_LITERAL(1, 5, 22), // "createChangePawnWidget"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "color"
QT_MOC_LITERAL(4, 35, 4), // "posX"
QT_MOC_LITERAL(5, 40, 4), // "posY"
QT_MOC_LITERAL(6, 45, 22), // "signalOnAddPassageElem"
QT_MOC_LITERAL(7, 68, 15), // "passageBlockPos"
QT_MOC_LITERAL(8, 84, 30), // "updateFiguresPositionsFromPawn"
QT_MOC_LITERAL(9, 115, 7), // "Figure*"
QT_MOC_LITERAL(10, 123, 6), // "figure"
QT_MOC_LITERAL(11, 130, 18), // "slotPawnCollection"
QT_MOC_LITERAL(12, 149, 33), // "QVector<QPair<Figure*,QPointF..."
QT_MOC_LITERAL(13, 183, 10), // "collection"
QT_MOC_LITERAL(14, 194, 20) // "slotOnAddPassageElem"

    },
    "Pawn\0createChangePawnWidget\0\0color\0"
    "posX\0posY\0signalOnAddPassageElem\0"
    "passageBlockPos\0updateFiguresPositionsFromPawn\0"
    "Figure*\0figure\0slotPawnCollection\0"
    "QVector<QPair<Figure*,QPointF> >&\0"
    "collection\0slotOnAddPassageElem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pawn[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    1,   46,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   52,    2, 0x0a /* Public */,
      14,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QPointF,    7,

       0        // eod
};

void Pawn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pawn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createChangePawnWidget((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->signalOnAddPassageElem((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->updateFiguresPositionsFromPawn((*reinterpret_cast< Figure*(*)>(_a[1]))); break;
        case 3: _t->slotPawnCollection((*reinterpret_cast< QVector<QPair<Figure*,QPointF> >(*)>(_a[1]))); break;
        case 4: _t->slotOnAddPassageElem((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Figure* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pawn::*)(bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pawn::createChangePawnWidget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Pawn::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pawn::signalOnAddPassageElem)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Pawn::*)(Figure * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pawn::updateFiguresPositionsFromPawn)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pawn::staticMetaObject = { {
    QMetaObject::SuperData::link<Figure::staticMetaObject>(),
    qt_meta_stringdata_Pawn.data,
    qt_meta_data_Pawn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pawn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pawn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pawn.stringdata0))
        return static_cast<void*>(this);
    return Figure::qt_metacast(_clname);
}

int Pawn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Figure::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Pawn::createChangePawnWidget(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pawn::signalOnAddPassageElem(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pawn::updateFiguresPositionsFromPawn(Figure * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
