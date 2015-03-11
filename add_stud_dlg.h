#ifndef ADD_STUD_DLG_H
#define ADD_STUD_DLG_H

#include <QDialog>

struct grp_data{
    int grp_id;
    QString grp_code;
};

struct stud_data{
    int stud_id;
    QString stud_surename;
    QString stud_name;
    QString stud_patronymic;
};


namespace Ui {
class add_stud_dlg;
}

class add_stud_dlg : public QDialog
{
    Q_OBJECT

public:
    explicit add_stud_dlg(QWidget *parent = 0);
    ~add_stud_dlg();
    void comboBox_groups_clear();
    void comboBox_groups_addItem(QString item, QVariant itemID);
    void comboBox_groups_set_curItem(QString item);
    void lineEdit_Name_setText(QString value);
    void lineEdit_Surename_setText(QString value);
    void lineEdit_Patronymic_setText(QString value);
    QVariant get_group_id();
    QString get_group_code();
    QString get_lineEdit_Name();
    QString get_lineEdit_Surename();
    QString get_lineEdit_Patronymic();
    stud_data get_stud_data();
    grp_data get_group_data();

private:
    Ui::add_stud_dlg *ui;

};

#endif // ADD_STUD_DLG_H