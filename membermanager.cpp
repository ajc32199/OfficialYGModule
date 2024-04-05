#include "membermanager.h"

MemberManager::MemberManager() {

}

void MemberManager::addMember(const FraternityMember member){
    members.append(member);
}
