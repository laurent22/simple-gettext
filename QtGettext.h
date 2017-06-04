/*
  Copyright (C) 2010 Laurent Cozic. All right reserved.
  Use of this source code is governed by a GNU/GPL license that can be
  found in the LICENSE file.
*/


#ifndef Gettext_QtGettext_H
#define Gettext_QtGettext_H

#include <QString>
#include <QStringList>
#include "LauGettext.h"

#undef _
#define _(x) QtGettext::instance()->getTranslation(x)


class QtGettext : public LauGettext {

public:

  static QtGettext* instance();
  static void destroyInstance();

  QtGettext();
  ~QtGettext();
  void setCatalogueLocation(const QString& location);
  void setCatalogueName(const QString& name);
  void setLocale(const QString& localeCode);
  QString moFilePath() const;
  inline QString locale() const { return QString::fromAscii(LauGettext::locale().c_str()); } //QString::fromStdString(LauGettext::locale()); }
  inline QString languageCode() const { return QString::fromAscii(LauGettext::languageCode().c_str()); }
  inline QString countryCode() const { return QString::fromAscii(LauGettext::countryCode().c_str()); }
  inline QString catalogueName() const { return QString::fromAscii(LauGettext::catalogueName().c_str()); }
  inline QString catalogueLocation() const { return QString::fromAscii(LauGettext::catalogueLocation().c_str()); }

  QString getTranslation(const QString& originalString) const;
  QStringList availableLocales() const;

  QString charset() const;

private:

  static QtGettext* instance_;
  mutable bool gotAvailableLocales_;
  mutable QStringList availableLocales_;

};

#endif // Gettext_QtGettext_H
