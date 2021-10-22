/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shared/qtproject_pch.h"
#include "../src/ribbon/QtnRibbonPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtitan__ExWidgetWrapper_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__ExWidgetWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__ExWidgetWrapper_t qt_meta_stringdata_Qtitan__ExWidgetWrapper = {
    {
QT_MOC_LITERAL(0, 0, 23) // "Qtitan::ExWidgetWrapper"

    },
    "Qtitan::ExWidgetWrapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__ExWidgetWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qtitan::ExWidgetWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::ExWidgetWrapper::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Qtitan__ExWidgetWrapper.data,
    qt_meta_data_Qtitan__ExWidgetWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::ExWidgetWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::ExWidgetWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__ExWidgetWrapper.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtitan::ExWidgetWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu_t qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qtitan::ReducedGroupPopupMenu"
QT_MOC_LITERAL(1, 30, 11), // "aboutToHide"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "actionTriggered"
QT_MOC_LITERAL(4, 59, 8), // "QAction*"
QT_MOC_LITERAL(5, 68, 6) // "action"

    },
    "Qtitan::ReducedGroupPopupMenu\0aboutToHide\0"
    "\0actionTriggered\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__ReducedGroupPopupMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void Qtitan::ReducedGroupPopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReducedGroupPopupMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToHide(); break;
        case 1: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReducedGroupPopupMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReducedGroupPopupMenu::aboutToHide)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::ReducedGroupPopupMenu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu.data,
    qt_meta_data_Qtitan__ReducedGroupPopupMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::ReducedGroupPopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::ReducedGroupPopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__ReducedGroupPopupMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Qtitan::ReducedGroupPopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Qtitan::ReducedGroupPopupMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Qtitan__RibbonGroupWrapper_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__RibbonGroupWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__RibbonGroupWrapper_t qt_meta_stringdata_Qtitan__RibbonGroupWrapper = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qtitan::RibbonGroupWrapper"
QT_MOC_LITERAL(1, 27, 15), // "resetPopopGroup"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "Qtitan::RibbonGroupWrapper\0resetPopopGroup\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__RibbonGroupWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qtitan::RibbonGroupWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RibbonGroupWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetPopopGroup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::RibbonGroupWrapper::staticMetaObject = { {
    &QToolButton::staticMetaObject,
    qt_meta_stringdata_Qtitan__RibbonGroupWrapper.data,
    qt_meta_data_Qtitan__RibbonGroupWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::RibbonGroupWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::RibbonGroupWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGroupWrapper.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int Qtitan::RibbonGroupWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Qtitan__RibbonGroupOption_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__RibbonGroupOption_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__RibbonGroupOption_t qt_meta_stringdata_Qtitan__RibbonGroupOption = {
    {
QT_MOC_LITERAL(0, 0, 25) // "Qtitan::RibbonGroupOption"

    },
    "Qtitan::RibbonGroupOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__RibbonGroupOption[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qtitan::RibbonGroupOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::RibbonGroupOption::staticMetaObject = { {
    &QToolButton::staticMetaObject,
    qt_meta_stringdata_Qtitan__RibbonGroupOption.data,
    qt_meta_data_Qtitan__RibbonGroupOption,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::RibbonGroupOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::RibbonGroupOption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGroupOption.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int Qtitan::RibbonGroupOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Qtitan__RibbonGroupScroll_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__RibbonGroupScroll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__RibbonGroupScroll_t qt_meta_stringdata_Qtitan__RibbonGroupScroll = {
    {
QT_MOC_LITERAL(0, 0, 25) // "Qtitan::RibbonGroupScroll"

    },
    "Qtitan::RibbonGroupScroll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__RibbonGroupScroll[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qtitan::RibbonGroupScroll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::RibbonGroupScroll::staticMetaObject = { {
    &QToolButton::staticMetaObject,
    qt_meta_stringdata_Qtitan__RibbonGroupScroll.data,
    qt_meta_data_Qtitan__RibbonGroupScroll,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::RibbonGroupScroll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::RibbonGroupScroll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonGroupScroll.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int Qtitan::RibbonGroupScroll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
