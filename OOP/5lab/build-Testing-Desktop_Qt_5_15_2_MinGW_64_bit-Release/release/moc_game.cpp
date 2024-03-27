/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Desktop/MiniProject-Profile-main/Chess/game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[21];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 17), // "getPawnCollection"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 33), // "QVector<QPair<Figure*,QPointF..."
QT_MOC_LITERAL(4, 58, 10), // "collection"
QT_MOC_LITERAL(5, 69, 14), // "sendAllFigures"
QT_MOC_LITERAL(6, 84, 40), // "signalStartCalculatingCheckMa..."
QT_MOC_LITERAL(7, 125, 14), // "colorOfTheKing"
QT_MOC_LITERAL(8, 140, 40), // "signalStartCalculatingCheckMa..."
QT_MOC_LITERAL(9, 181, 26), // "exportCEELOToKingFromWhite"
QT_MOC_LITERAL(10, 208, 12), // "QSet<Block*>"
QT_MOC_LITERAL(11, 221, 5), // "block"
QT_MOC_LITERAL(12, 227, 26), // "exportCEELOToKingFromBlack"
QT_MOC_LITERAL(13, 254, 16), // "exportFiguresVec"
QT_MOC_LITERAL(14, 271, 16), // "QVector<Figure*>"
QT_MOC_LITERAL(15, 288, 3), // "fig"
QT_MOC_LITERAL(16, 292, 12), // "countOfSteps"
QT_MOC_LITERAL(17, 305, 8), // "editVecs"
QT_MOC_LITERAL(18, 314, 17), // "QVector<Figure*>&"
QT_MOC_LITERAL(19, 332, 4), // "vecs"
QT_MOC_LITERAL(20, 337, 22) // "calculateCheckMateFunc"

    },
    "Game\0getPawnCollection\0\0"
    "QVector<QPair<Figure*,QPointF> >&\0"
    "collection\0sendAllFigures\0"
    "signalStartCalculatingCheckMateFROMWHITE\0"
    "colorOfTheKing\0signalStartCalculatingCheckMateFROMBLACK\0"
    "exportCEELOToKingFromWhite\0QSet<Block*>\0"
    "block\0exportCEELOToKingFromBlack\0"
    "exportFiguresVec\0QVector<Figure*>\0fig\0"
    "countOfSteps\0editVecs\0QVector<Figure*>&\0"
    "vecs\0calculateCheckMateFunc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,
      12,    1,   79,    2, 0x06 /* Public */,
      13,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   85,    2, 0x0a /* Public */,
      17,    1,   86,    2, 0x0a /* Public */,
      20,    1,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getPawnCollection((*reinterpret_cast< QVector<QPair<Figure*,QPointF> >(*)>(_a[1]))); break;
        case 1: _t->sendAllFigures((*reinterpret_cast< QVector<QPair<Figure*,QPointF> >(*)>(_a[1]))); break;
        case 2: _t->signalStartCalculatingCheckMateFROMWHITE((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalStartCalculatingCheckMateFROMBLACK((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->exportCEELOToKingFromWhite((*reinterpret_cast< QSet<Block*>(*)>(_a[1]))); break;
        case 5: _t->exportCEELOToKingFromBlack((*reinterpret_cast< QSet<Block*>(*)>(_a[1]))); break;
        case 6: _t->exportFiguresVec((*reinterpret_cast< QVector<Figure*>(*)>(_a[1]))); break;
        case 7: _t->countOfSteps(); break;
        case 8: _t->editVecs((*reinterpret_cast< QVector<Figure*>(*)>(_a[1]))); break;
        case 9: _t->calculateCheckMateFunc((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<Block*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<Block*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<Figure*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(QVector<QPair<Figure*,QPointF> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::getPawnCollection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Game::*)(QVector<QPair<Figure*,QPointF> > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::sendAllFigures)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Game::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::signalStartCalculatingCheckMateFROMWHITE)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Game::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::signalStartCalculatingCheckMateFROMBLACK)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Game::*)(QSet<Block*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::exportCEELOToKingFromWhite)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Game::*)(QSet<Block*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::exportCEELOToKingFromBlack)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Game::*)(QVector<Figure*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::exportFiguresVec)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Game.data,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Game::getPawnCollection(QVector<QPair<Figure*,QPointF> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::sendAllFigures(QVector<QPair<Figure*,QPointF> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Game::signalStartCalculatingCheckMateFROMWHITE(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Game::signalStartCalculatingCheckMateFROMBLACK(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Game::exportCEELOToKingFromWhite(QSet<Block*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Game::exportCEELOToKingFromBlack(QSet<Block*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Game::exportFiguresVec(QVector<Figure*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
