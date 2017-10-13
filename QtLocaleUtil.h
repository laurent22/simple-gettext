#ifndef Gettext_QtLocaleUtil_H
#define Gettext_QtLocaleUtil_H

#include <QString>
#include <map>

class QtLocaleUtil {

public:

  QtLocaleUtil();
  QString getDisplayName(const QString& canonicalName) const;
  QString getLanguageName(const QString& languageCode, bool defaultToEnglish = true) const;
  QString getLanguageNameInEnglish(const QString& languageCode) const;
  QString getLanguageCodeOnly(const QString& canonicalName) const;
  QString getCountryCodeOnly(const QString& canonicalName) const;
  QString getCountryName(const QString& countryCode) const;

private:

  mutable std::map<QString, QString> codeToLanguage_;
  mutable std::map<QString, QString> codeToLanguageE_;
  mutable std::map<QString, QString> codeToCountry_;

};

#endif // Gettext_QtLocaleUtil_H
