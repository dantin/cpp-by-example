# enable BASH-specific features
SHELL := /bin/bash

SOURCE_DIR := $(shell pwd)
PRIMER_DIR := primer

PRIMER_DIRS := $(foreach dir, $(PRIMER_DIR), $(wildcard $(PRIMER_DIR)/ch*))

CPPLINT := cpplint --quiet

.PHONY: check
check:
	@echo "process static check"
	@for subdir in $(PRIMER_DIRS); \
		do \
			m=`echo $$subdir | cut -d/ -f 2`; \
			echo -e "  -> '$$m'"; \
			$(CPPLINT) $(SOURCE_DIR)/$$subdir/*.cc; \
			$(CPPLINT) $(SOURCE_DIR)/$$subdir/exercise/*.cc; \
		done

.PHONY: init
init:
	@echo "install cpplint"
	@pip install cpplint
