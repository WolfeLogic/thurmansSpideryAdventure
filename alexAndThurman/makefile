# CXX is a standard variable name used for the compiler. 
CXX = g++

# CXXFLAGS is a standard variable name for compile flags.
# -std=c++0x specifies to use a certain language version.
CXXFLAGS = -std=c++11

# -Wall turns on all warnings
#CXXFLAGS += -Wall

# -pedantic-errors strictly enforces the standard
#CXXFLAGS += -pedantic-errors

# -g turns on debug information 
CXXFLAGS += -g

####################
### USER SECTION ###
####################

# SRCS is a standard name for the source files. 
# Edit as needed.
SRC1 = abandonedThemePark.cpp
SRC2 =	comicBookStore.cpp
SRC3 =	earthCandyBar.cpp
SRC4 =	flashlight.cpp
SRC5 =	item.cpp
SRC6 =	krinklyDarHoofsGrave.cpp
SRC7 =	laFitness.cpp
SRC8 =	libraryOfSundries.cpp
SRC9 =	location.cpp
SRC10 =	magicClock.cpp
SRC11 =	main.cpp
SRC12 =	mubScoutTroop205.cpp
SRC13 =	rabbitsFoot.cpp
SRC14 =	schwankles.cpp
SRC15 =	skatePark.cpp
SRC16 =	slingShotAndAgSlugs.cpp
SRC17 =	sunbrellaCorp.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9} ${SRC10} ${SRC11} ${SRC12} ${SRC13} ${SRC14} ${SRC15} ${SRC16} ${SRC17}

# HEADERS is a standard name for the header files. 
# Edit these as needed.
HEADER1 = abandonedThemePark.hpp
HEADER2	= comicBookStore.hpp
HEADER3	= earthCandyBar.hpp
HEADER4	= flashlight.hpp
HEADER5	= item.hpp
HEADER6	= krinklyDarHoofsGrave.hpp
HEADER7	= laFitness.hpp
HEADER8	= libraryOfSundries.hpp
HEADER9	= location.hpp
HEADER10 = magicClock.hpp
HEADER11 = mubScoutTroop205.hpp
HEADER12 = rabbitsFoot.hpp
HEADER13 = schwankles.hpp
HEADER14 = skatePark.hpp
HEADER15 = slingShotAndAgSlugs.hpp
HEADER16 = sunbrellaCorp.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6} ${HEADER7} ${HEADER8} ${HEADER9} ${HEADER10} ${HEADER11} ${HEADER12} ${HEADER13} ${HEADER14} ${HEADER15} ${HEADER16}

# These will be your executable names. 
# Edit as needed.
PROG1 = FP-CS162_Wolfe
#PROG2 = 
PROGS = ${PROG1} 

# This is the name of your document(s). 
# Edit as needed.
DOC = FINAL-PROJECT_DWOLFE_CS162-400.pdf

# This is the name of your compressed file. 
# Edit name as needed. Keep the format.
#TAR = cs162-400_assignment1_username.tar.bz2
TAR = cs162-400_FP_dWolfe.tar.bz2

#####################
### BUILD SECTION ###
#####################

# Typing 'make' in terminal calls the first build availible.
# In this case, default.
default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG1}

# Typing 'make all' in terminal calls this build.
all:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG1}

# Typing 'make tar' in terminal calls this build.
# This creates a compressed file for submission.
tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} ${DOC} makefile

# Typing 'make clean' calls this build.
# It's designed to clean up the folder.
# Be careful with this, edit as needed.
clean: 
	rm -f ${PROGS} *.o *~

