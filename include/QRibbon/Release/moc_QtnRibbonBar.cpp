/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shared/qtproject_pch.h"
#include "../src/ribbon/QtnRibbonBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtitan__RibbonBar_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__RibbonBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__RibbonBar_t qt_meta_stringdata_Qtitan__RibbonBar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Qtitan::RibbonBar"
QT_MOC_LITERAL(1, 18, 19), // "minimizationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "minimized"
QT_MOC_LITERAL(4, 49, 18), // "currentPageChanged"
QT_MOC_LITERAL(5, 68, 5), // "index"
QT_MOC_LITERAL(6, 74, 11), // "RibbonPage*"
QT_MOC_LITERAL(7, 86, 4), // "page"
QT_MOC_LITERAL(8, 91, 13), // "keyTipsShowed"
QT_MOC_LITERAL(9, 105, 6), // "showed"
QT_MOC_LITERAL(10, 112, 14), // "setCurrentPage"
QT_MOC_LITERAL(11, 127, 14), // "currentChanged"
QT_MOC_LITERAL(12, 142, 16), // "currentIndexPage"
QT_MOC_LITERAL(13, 159, 17), // "frameThemeEnabled"
QT_MOC_LITERAL(14, 177, 9) // "maximized"

    },
    "Qtitan::RibbonBar\0minimizationChanged\0"
    "\0minimized\0currentPageChanged\0index\0"
    "RibbonPage*\0page\0keyTipsShowed\0showed\0"
    "setCurrentPage\0currentChanged\0"
    "currentIndexPage\0frameThemeEnabled\0"
    "maximized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__RibbonBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495003,
      13, QMetaType::Bool, 0x00095103,
       3, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,

       0        // eod
};

void Qtitan::RibbonBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RibbonBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimizationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentPageChanged((*reinterpret_cast< RibbonPage*(*)>(_a[1]))); break;
        case 3: _t->keyTipsShowed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setCurrentPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RibbonBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RibbonBar::minimizationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RibbonBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RibbonBar::currentPageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RibbonBar::*)(RibbonPage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RibbonBar::currentPageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RibbonBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RibbonBar::keyTipsShowed)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RibbonBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndexPage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isFrameThemeEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMinimized(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isMaximized(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RibbonBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentPage(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFrameThemeEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMinimized(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMaximized(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::RibbonBar::staticMetaObject = { {
    &QMenuBar::staticMetaObject,
    qt_meta_stringdata_Qtitan__RibbonBar.data,
    qt_meta_data_Qtitan__RibbonBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::RibbonBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::RibbonBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonBar.stringdata0))
        return static_cast<void*>(this);
    return QMenuBar::qt_metacast(_clname);
}

int Qtitan::RibbonBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonBar::minimizationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qtitan::RibbonBar::currentPageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qtitan::RibbonBar::currentPageChanged(RibbonPage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qtitan::RibbonBar::keyTipsShowed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
