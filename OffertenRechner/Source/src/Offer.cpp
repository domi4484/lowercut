
// Files includes --------------------------
#include "Offer.h"

//-----------------------------------------------------------------------------------------------------------------------------

Offer::Offer(QObject *parent)
  : QObject(parent)
  , m_Name()
  , m_QList_Parts()
  , m_Modified(true)
{

}

//-----------------------------------------------------------------------------------------------------------------------------

void Offer::setName(const QString &name)
{
  m_Name = name;
  emit changed();
}

//-----------------------------------------------------------------------------------------------------------------------------

void Offer::save(const QString &filename)
{

}

