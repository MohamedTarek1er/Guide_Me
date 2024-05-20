/****************************************************************************
** Meta object code from reading C++ file 'updatewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../updatewindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUpdateWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUpdateWindowENDCLASS = QtMocHelpers::stringData(
    "UpdateWindow",
    "closeButtonClicked",
    "",
    "on_backToMenu_clicked",
    "on_costUpdate_clicked",
    "on_addTrans_clicked",
    "on_DeleteTrans_clicked",
    "on_updateName_clicked",
    "closeEvent",
    "QCloseEvent*",
    "event"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUpdateWindowENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[23];
    char stringdata7[22];
    char stringdata8[11];
    char stringdata9[13];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUpdateWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUpdateWindowENDCLASS_t qt_meta_stringdata_CLASSUpdateWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "UpdateWindow"
        QT_MOC_LITERAL(13, 18),  // "closeButtonClicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 21),  // "on_backToMenu_clicked"
        QT_MOC_LITERAL(55, 21),  // "on_costUpdate_clicked"
        QT_MOC_LITERAL(77, 19),  // "on_addTrans_clicked"
        QT_MOC_LITERAL(97, 22),  // "on_DeleteTrans_clicked"
        QT_MOC_LITERAL(120, 21),  // "on_updateName_clicked"
        QT_MOC_LITERAL(142, 10),  // "closeEvent"
        QT_MOC_LITERAL(153, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(166, 5)   // "event"
    },
    "UpdateWindow",
    "closeButtonClicked",
    "",
    "on_backToMenu_clicked",
    "on_costUpdate_clicked",
    "on_addTrans_clicked",
    "on_DeleteTrans_clicked",
    "on_updateName_clicked",
    "closeEvent",
    "QCloseEvent*",
    "event"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUpdateWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    1,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject UpdateWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSUpdateWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUpdateWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUpdateWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateWindow, std::true_type>,
        // method 'closeButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backToMenu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_costUpdate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addTrans_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DeleteTrans_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateName_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>
    >,
    nullptr
} };

void UpdateWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeButtonClicked(); break;
        case 1: _t->on_backToMenu_clicked(); break;
        case 2: _t->on_costUpdate_clicked(); break;
        case 3: _t->on_addTrans_clicked(); break;
        case 4: _t->on_DeleteTrans_clicked(); break;
        case 5: _t->on_updateName_clicked(); break;
        case 6: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateWindow::*)();
            if (_t _q_method = &UpdateWindow::closeButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *UpdateWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUpdateWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UpdateWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void UpdateWindow::closeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
