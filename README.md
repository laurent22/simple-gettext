Introduction
============

This library allows parsing and using Gettext mo files in C++ projects. A Qt wrapper is also provided which allows using Gettext in Qt projects.

The library is divided into three parts:

  * An Mo file parser, which provide a way to extract the strings from the file and match an original string to a translated string.

  * A class to manage a set of MO files. You set the location of the mo files, the current locale and other parameters, and the class automatically determine which mo file to use. The latter is then parsed and ready to use. This class is generic enough to be used in any C++ project.
 
  * Finally, a Qt wrapper is provided to provide support for Gettext in the Qt Framework.

Documentation
=============

  * [Using the Gettext library in any C++ project](https://github.com/laurent22/simple-gettext/wiki/UsingTheLibraryInStandardCppProjects)

  * [Using the Gettext library with the Qt Framework](https://github.com/laurent22/simple-gettext/wiki/SettingUpGettextForQt)