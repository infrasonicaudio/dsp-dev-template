# Project Name
TARGET = FeedbackSynth

LIBDAISY_DIR = lib/libDaisy
DAISYSP_DIR = lib/DaisySP

C_DEFS = -DTARGET_DAISY

C_INCLUDES = \
	-ISource/

CPP_SOURCES = \
	Synth_main.cpp

# Core location, and generic Makefile.
SYSTEM_FILES_DIR = $(LIBDAISY_DIR)/core
include $(SYSTEM_FILES_DIR)/Makefile
