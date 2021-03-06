/*************************************************************************
 *                                                                       *
 *  I|*j^3Cl|a   "+!*%                  qt          Nd   gW              *
 *  l]{y+l?MM*  !#Wla\NNP               NW          MM   I|              *
 *        PW    ?E|    tWg              Wg  sC!     AW           ~@v~    *
 *       NC     ?M!    yN|  WW     MK   MW@K1Y%M@   RM   #Q    QP@tim    *
 *     CM|      |WQCljAE|   MD     Mg   RN     cM~  NM   WQ   MQ         *
 *    #M        aQ?         MW     M3   Mg      Q(  HQ   YR  IM|         *
 *   Dq         {Ql         MH    iMX   Mg     MM   QP   QM   Eg         *
 * !EWNaPRag2$  +M"          $WNaHaN%   MQE$%EXW    QQ   CM    %M%a$D    *
 *                                                                       *
 *                               ZPublic                                 *
 *                  Developer: zapline(278998871@qq.com)                 *
 *               Website: https://github.com/zpublic/zpublic             *
 *                                                                       *
 ************************************************************************/
#include "value_data_string.h"

namespace zl
{
namespace DataBox
{

void StringData::SetValue(IN const std::string& Value)
{
    m_Value = Value;
}

bool StringData::ToStr(OUT std::string& Value)
{
    Value = m_Value;
    return true;
}

StringData::StringData( const std::string& Value )
    : m_Value(Value)
{
    SetValue(Value);
}

StringData::StringData( const char* Value )
{
    if (Value)
    {
        m_Value = Value;
    }
}

StringData::StringData() : m_Value("")
{
}

StringData::~StringData()
{
}

}// namespace DataBox
}// namespace zl
