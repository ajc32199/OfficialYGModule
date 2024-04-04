#ifndef MEMBERMANAGER_H
#define MEMBERMANAGER_H
#include <QString>
#include <QVector>
#include <QJsonObject>

struct FraternityMember{
    QString firstName;
    QString lastName;
    int age;
    QString officerPosition;
    double debts;
    QString comments;

    QJsonObject toJson() const{
        QJsonObject memberObj;
        memberObj["first_name"] = firstName;
        memberObj["last_name"] = lastName;
        memberObj["age"] = age;
        memberObj["officer_position"] = officerPosition;
        memberObj["debts"] = debts;
        memberObj["comments"] = comments;
        return memberObj;
    }
};

class MemberManager
{
public:
    MemberManager() = default;

    void addMember(const FraternityMember member);

    bool saveToFile(const QString& filePath) const;
private:
    QVector<FraternityMember> members;
};

#endif // MEMBERMANAGER_H
