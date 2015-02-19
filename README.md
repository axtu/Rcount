Rcount project for Mac OS
=========================

If you decided to help/extend Rcount project and Xcode is your choice of IDE under Mac OS, here are some suggestions to help you get a clean start. There are two ways of code preparation to use with Xcode.

/**
Regardless of what your future steps will be, in order to build Rcount modules you are going to need:

Qt (http://www.qt.io/download/)
libz, can be obtained from macports ```sudo port install zlib```, homebrew ```brew install zlib```, or compiled from source (http://www.zlib.net)
*/


# Easy way:
Clone this branch:
```git clone https://github.com/axtu/Rcount.git Rcount```

Folders
- source_V2/p502_process_multireads
- source_V2/p502_format_wizard
- source_V2/p502dataAnalysisRNA

contain .xcodeproj files, which have already been configured and can be extended with ease


# Slightly less easy way:
1. Clone the [default branch by MWSchmid, the author of Rcount](https://github.com/MWSchmid/Rcount) and convert the original .pro QtCreator project files into .xcodeproj files. To do so:
```git clone https://github.com/MWSchmid/Rcount Rcount```
2. Check the source_V2/p502_process_multireads, source_V2/p502_format_wizard, source_V2/p502dataAnalysisRNA folders to find the .pro files. Convert all three files as follows: ```qmake -spec macx-xcode p502_<project name>.pro```; this process will automatically attach the necessary frameworks to each module’s project
3. Open projects in Xcode; add seqan headers as follows:
select the project file and click on the “Target” (Rcount-<format,multireads or distribute>
go to “Headers search path” (open Basic + Level views), add /path/to/Rcount/folder/source_V2/ to the list of paths; this way the header files from seqan folder will be linked
4. Move to “Linker” entry and add “-lz” to “Other Linker Flags” in order to link zlib
5. (*)Additionally you might want to configure the project for building a release version; to do that open “Product->Scheme” and change “Debug” option to “Release”

The projects may now be build with “Product->Build” or simply Cmd+B

# Precompiled binaries:
[mac_64.dmg](https://github.com/axtu/Rcount/blob/master/other/mac_64.dmg)
contains 3 Rcount modules and scripts
