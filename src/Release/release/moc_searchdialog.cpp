/****************************************************************************
** Meta object code from reading C++ file 'searchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../searchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchDialog_t {
    QByteArrayData data[11];
    char stringdata[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SearchDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 27),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 5),
QT_MOC_LITERAL(4, 48, 32),
QT_MOC_LITERAL(5, 81, 30),
QT_MOC_LITERAL(6, 112, 29),
QT_MOC_LITERAL(7, 142, 32),
QT_MOC_LITERAL(8, 175, 26),
QT_MOC_LITERAL(9, 202, 34),
QT_MOC_LITERAL(10, 237, 4)
    },
    "SearchDialog\0on_tabWidget_currentChanged\0"
    "\0index\0on_FindNext_pushButton_1_clicked\0"
    "on_Cancel_pushButton_1_clicked\0"
    "on_Replace_pushButton_clicked\0"
    "on_ReplaceAll_pushButton_clicked\0"
    "on_Goto_pushButton_clicked\0"
    "on_FindWhat_lineEdit_1_textChanged\0"
    "arg1\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08,
       4,    0,   52,    2, 0x08,
       5,    0,   53,    2, 0x08,
       6,    0,   54,    2, 0x08,
       7,    0,   55,    2, 0x08,
       8,    0,   56,    2, 0x08,
       9,    1,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        switch (_id) {
        case 0: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_FindNext_pushButton_1_clicked(); break;
        case 2: _t->on_Cancel_pushButton_1_clicked(); break;
        case 3: _t->on_Replace_pushButton_clicked(); break;
        case 4: _t->on_ReplaceAll_pushButton_clicked(); break;
        case 5: _t->on_Goto_pushButton_clicked(); break;
        case 6: _t->on_FindWhat_lineEdit_1_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchDialog.data,
      qt_meta_data_SearchDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
