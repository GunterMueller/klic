
DIST_OTHER_HEADERS =

# ---------------------------------------------------------- 
#   (C)1993, 1994, 1995 Institute for New Generation Computer Technology 
#	(Read COPYRIGHT for detailed information.) 
#   (C)1996, 1997, 1998, 1999 Japan Information Processing Development Center
#       (Read COPYRIGHT-JIPDEC for detailed information.)
# ----------------------------------------------------------

DISTHEADERS = klic/interpe.h klic/distio.h klic/distproc.h klic/distpkt.h \
	      klic/rmon.h $(DISTMHEADERS)

SHMHEADERS = klic/shm.h klic/shm_machine.h

HEADERS = klic/config.h klic/alloc.h klic/atomstuffs.h \
	klic/klichdr.h klic/options.h \
	klic/basic.h klic/bb.h klic/control.h \
	klic/functorstuffs.h klic/predinfo.h \
	klic/gb.h klic/gobj.h \
	klic/g_methtab.h klic/index.h \
	klic/param.h klic/primitives.h klic/schedule.h klic/susp.h \
	klic/struct.h klic/timing.h klic/unify.h klic/sighndl.h klic/trace.h \
	klic/traceio.h klic/timer.h \
	klic/g_basic.h klic/g_extern.h klic/g_extinl.h \
	klic/gd_macro.h klic/gd_methtab.h klic/gdobject.h \
	klic/generic.h klic/newatom.h \
	klic/gc_macro.h klic/gc_methtab.h klic/gcobject.h \
	klic/gg_macro.h klic/gg_methtab.h \
	klic/gmodule.h klic/g_pointer.h klic/g_string.h klic/g_vector.h \
	klic/g_float.h 	klic/g_termarray.h \
	klic/asyncio.h


#ls:
#	ls ${HEADERS} ${DISTHEADERS} ${SHMHEADERS}
install:
	- $(INSTDIR) $(KLICINCLUDE)/klic
	if (test `pwd` != $(KLICINCLUDE)) then \
	 	($(INSTALLHDR) $(HEADERS) $(KLICINCLUDE)/klic);\
		for file in $(DISTHEADERS) $(SHMHEADERS); \
		do test -f $$file && \
			$(INSTALLHDR) $$file $(KLICINCLUDE)/klic;\
		done;\
	fi

clean:
	/bin/rm -f *~ \#*\# klic/*~ klic/\#*\#
distclean: clean
	/bin/rm -f klic/config.h Makefile
realclean: distclean
