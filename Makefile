SUBDIRS=src
TESTDIR=test
SAMPLEDIR=sample
DOCDIR=doc
TAGS=ctags

.PHONY: doc test clean

all:
	@for i in $(SUBDIRS) ; \
	do \
		$(MAKE) -C $$i $@; \
	done
	$(TAGS) -R *

coverage:

test:
	$(MAKE) -C $(TESTDIR) $@

doc:
	@for i in $(DOCDIR) ; \
	do \
		$(MAKE) -C $$i $@; \
	done

clean:
	@for i in $(SUBDIRS) $(TESTDIR) $(DOCDIR) ; \
	do \
		$(MAKE) -C $$i $@; \
	done
