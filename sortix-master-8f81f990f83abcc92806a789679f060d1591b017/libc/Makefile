SOFTWARE_MEANT_FOR_SORTIX=1
include ../build-aux/platform.mak
include ../build-aux/compiler.mak
include ../build-aux/version.mak
include ../build-aux/dirs.mak

OPTLEVEL?=$(DEFAULT_OPTLEVEL)

CPUDIR:=$(CPU)

CPPINCLUDES=-Iinclude
CPPFLAGS=-D__is_sortix_libc $(CPPINCLUDES)
FLAGS=-Wall -Wextra -ffreestanding $(OPTLEVEL)
CFLAGS=-std=gnu11 -Wstrict-prototypes -Werror=implicit-function-declaration
CXXFLAGS=-std=gnu++11 -fno-exceptions -fno-rtti
ASFLAGS=

FREEOBJS=\
assert/__assert.o \
c++/c++.o \
c++/op-new.o \
ctype/isalnum.o \
ctype/isalpha.o \
ctype/isascii.o \
ctype/isblank.o \
ctype/iscntrl.o \
ctype/isdigit.o \
ctype/isgraph.o \
ctype/islower.o \
ctype/isprint.o \
ctype/ispunct.o \
ctype/isspace.o \
ctype/isupper.o \
ctype/isxdigit.o \
ctype/tolower.o \
ctype/toupper.o \
dirent/alphasort.o \
dirent/alphasort_r.o \
dirent/dirfd.o \
dirent/versionsort.o \
dirent/versionsort_r.o \
errno/errno.o \
fnmatch/fnmatch.o \
inttypes/imaxabs.o \
inttypes/imaxdiv.o \
inttypes/strtoimax.o \
inttypes/strtoumax.o \
inttypes/wcstoimax.o \
inttypes/wcstoumax.o \
libgen/basename.o \
libgen/dirname.o \
malloc/__heap_expand_current_part.o \
malloc/heap_get_paranoia.o \
malloc/heap_init.o \
malloc/__heap_lock.o \
malloc/__heap_unlock.o \
malloc/__heap_verify.o \
netinet/in/in6addr_any.o \
netinet/in/in6addr_loopback.o \
regex/regcomp.o \
regex/regerror.o \
regex/regexec.o \
regex/regfree.o \
signal/sigaddset.o \
signal/sigandset.o \
signal/sigdelset.o \
signal/sigemptyset.o \
signal/sigfillset.o \
signal/sigisemptyset.o \
signal/sigismember.o \
signal/signotset.o \
signal/sigorset.o \
ssp/__stack_chk_fail.o \
stdio/asprintf.o \
stdio/cbprintf.o \
stdio/clearerr.o \
stdio/clearerr_unlocked.o \
stdio/dprintf.o \
stdio_ext/__fbufsize.o \
stdio_ext/__fpending.o \
stdio_ext/__fpurge.o \
stdio_ext/__freadable.o \
stdio_ext/__freading.o \
stdio_ext/__fseterr.o \
stdio_ext/__fwritable.o \
stdio_ext/__fwriting.o \
stdio/fclose.o \
stdio/fdeletefile.o \
stdio/feof.o \
stdio/feof_unlocked.o \
stdio/ferror.o \
stdio/ferror_unlocked.o \
stdio/fflush.o \
stdio/fflush_stop_reading.o \
stdio/fflush_stop_reading_unlocked.o \
stdio/fflush_stop_writing.o \
stdio/fflush_stop_writing_unlocked.o \
stdio/fflush_unlocked.o \
stdio/fgetc.o \
stdio/fgetc_unlocked.o \
stdio/fgets.o \
stdio/fgets_unlocked.o \
stdio/fileno_unlocked.o \
stdio/flockfile.o \
stdio/fmemopen.o \
stdio/fnewfile.o \
stdio/fparsemode.o \
stdio/fprintf_unlocked.o \
stdio/fputc.o \
stdio/fputc_unlocked.o \
stdio/fputs.o \
stdio/fputs_unlocked.o \
stdio/fread.o \
stdio/fread_unlocked.o \
stdio/fregister.o \
stdio/fresetfile.o \
stdio/fscanf.o \
stdio/fscanf_unlocked.o \
stdio/fseek.o \
stdio/fseeko.o \
stdio/fseeko_unlocked.o \
stdio/fshutdown.o \
stdio/ftell.o \
stdio/ftello.o \
stdio/ftello_unlocked.o \
stdio/ftrylockfile.o \
stdio/funlockfile.o \
stdio/funregister.o \
stdio/fwrite.o \
stdio/fwrite_unlocked.o \
stdio/getdelim.o \
stdio/getline.o \
stdio/open_memstream.o \
stdio/rewind.o \
stdio/setbuf.o \
stdio/setvbuf.o \
stdio/setvbuf_unlocked.o \
stdio/snprintf.o \
stdio/sprintf.o \
stdio/sscanf.o \
stdio/ungetc.o \
stdio/ungetc_unlocked.o \
stdio/vasprintf.o \
stdio/vcbprintf.o \
stdio/vdprintf.o \
stdio/vfprintf_unlocked.o \
stdio/vfscanf.o \
stdio/vfscanf_unlocked.o \
stdio/vscanf_callback.o \
stdio/vsnprintf.o \
stdio/vsprintf.o \
stdio/vsscanf.o \
stdlib/abort.o \
stdlib/abs.o \
stdlib/arc4random_buf.o \
stdlib/arc4random.o \
stdlib/arc4random_uniform.o \
stdlib/atof.o \
stdlib/atoi.o \
stdlib/atoll.o \
stdlib/atol.o \
stdlib/bsearch.o \
stdlib/calloc.o \
stdlib/div.o \
stdlib/free.o \
stdlib/labs.o \
stdlib/ldiv.o \
stdlib/llabs.o \
stdlib/lldiv.o \
stdlib/malloc.o \
stdlib/mblen.o \
stdlib/mbstowcs.o \
stdlib/mbtowc.o \
stdlib/qsort.o \
stdlib/qsort_r.o \
stdlib/reallocarray.o \
stdlib/realloc.o \
stdlib/strtod.o \
stdlib/strtof.o \
stdlib/strtold.o \
stdlib/strtoll.o \
stdlib/strtol.o \
stdlib/strtoull.o \
stdlib/strtoul.o \
stdlib/wcstombs.o \
stdlib/wctomb.o \
string/explicit_bzero.o \
string/ffsll.o \
string/ffsl.o \
string/ffs.o \
string/memccpy.o \
string/memchr.o \
string/memcmp.o \
string/memcpy.o \
string/memmove.o \
string/memrchr.o \
string/memset.o \
string/stpcpy.o \
string/stpncpy.o \
string/strcasecmp.o \
string/strcat.o \
string/strchrnul.o \
string/strchr.o \
string/strcmp.o \
string/strcoll_l.o \
string/strcoll.o \
string/strcpy.o \
string/strcspn.o \
string/strdup.o \
string/strerror_l.o \
string/strerror.o \
string/strerror_r.o \
string/stresep.o \
string/strlcat.o \
string/strlcpy.o \
string/strlen.o \
string/strncasecmp.o \
string/strncat.o \
string/strncmp.o \
string/strncpy.o \
string/strndup.o \
string/strnlen.o \
string/strpbrk.o \
string/strrchr.o \
string/strsep.o \
string/strsignal.o \
string/strspn.o \
string/strstr.o \
string/strtok.o \
string/strtok_r.o \
string/strverscmp.o \
string/strxfrm_l.o \
string/strxfrm.o \
string/timingsafe_memcmp.o \
termios/cfgetispeed.o \
termios/cfgetospeed.o \
termios/cfsetispeed.o \
termios/cfsetospeed.o \
time/asctime.o \
time/asctime_r.o \
time/gmtime.o \
time/gmtime_r.o \
time/mktime.o \
timespec/timespec.o \
time/strftime_l.o \
time/strftime.o \
time/timegm.o \
ubsan/ubsan.o \
wchar/btowc.o \
wchar/mbrlen.o \
wchar/mbrtowc.o \
wchar/mbsinit.o \
wchar/mbsnrtowcs.o \
wchar/mbsrtowcs.o \
wchar/wcpcpy.o \
wchar/wcpncpy.o \
wchar/wcrtomb.o \
wchar/wcscasecmp.o \
wchar/wcscat.o \
wchar/wcschrnul.o \
wchar/wcschr.o \
wchar/wcscmp.o \
wchar/wcscoll.o \
wchar/wcscpy.o \
wchar/wcscspn.o \
wchar/wcsdup.o \
wchar/wcsftime.o \
wchar/wcslcat.o \
wchar/wcslcpy.o \
wchar/wcslen.o \
wchar/wcsncasecmp.o \
wchar/wcsncat.o \
wchar/wcsncmp.o \
wchar/wcsncpy.o \
wchar/wcsnlen.o \
wchar/wcsnrtombs.o \
wchar/wcspbrk.o \
wchar/wcsrchr.o \
wchar/wcsrtombs.o \
wchar/wcsspn.o \
wchar/wcsstr.o \
wchar/wcstod.o \
wchar/wcstof.o \
wchar/wcstok.o \
wchar/wcstold.o \
wchar/wcstoll.o \
wchar/wcstol.o \
wchar/wcstoull.o \
wchar/wcstoul.o \
wchar/wcswidth.o \
wchar/wcsxfrm.o \
wchar/wctob.o \
wchar/wcwidth.o \
wchar/wmemchr.o \
wchar/wmemcmp.o \
wchar/wmemcpy.o \
wchar/wmemmove.o \
wchar/wmemset.o \
wctype/iswalnum.o \
wctype/iswalpha.o \
wctype/iswblank.o \
wctype/iswcntrl.o \
wctype/iswctype.o \
wctype/iswdigit.o \
wctype/iswgraph.o \
wctype/iswlower.o \
wctype/iswprint.o \
wctype/iswpunct.o \
wctype/iswspace.o \
wctype/iswupper.o \
wctype/iswxdigit.o \
wctype/towlower.o \
wctype/towupper.o \
wctype/wctype.o \

HOSTEDOBJS=\
arpa/inet/inet_addr.o \
arpa/inet/inet_ntoa.o \
arpa/inet/inet_ntop.o \
arpa/inet/inet_pton.o \
blf/blowfish.o \
$(CPUDIR)/fork.o \
$(CPUDIR)/setjmp.o \
$(CPUDIR)/syscall.o \
dirent/closedir.o \
dirent/dscandir_r.o \
dirent/fdopendir.o \
dirent/opendir.o \
dirent/readdir.o \
dirent/rewinddir.o \
dirent/scandir.o \
dlfcn/dlfcn.o \
err/err.o \
err/errx.o \
error/gnu_error.o \
err/verr.o \
err/verrx.o \
err/vwarn.o \
err/vwarnx.o \
err/warn.o \
err/warnx.o \
fcntl/creat.o \
fcntl/fcntl.o \
fcntl/openat.o \
fcntl/open.o \
fsmarshall/fsm_fsbind.o \
fsmarshall/fsm_mountat.o \
fstab/endfsent.o \
fstab/getfsent.o \
fstab/getfsfile.o \
fstab/getfsspec.o \
fstab/scanfsent.o \
fstab/setfsent.o \
getopt/getopt_long.o \
getopt/getopt.o \
grp/endgrent.o \
grp/fgetgrent.o \
grp/fgetgrent_r.o \
grp/getgrent.o \
grp/getgrent_r.o \
grp/getgrgid.o \
grp/getgrgid_r.o \
grp/getgrnam.o \
grp/getgrnam_r.o \
grp/opengr.o \
grp/setgrent.o \
init/init.o \
ioleast/preadall.o \
ioleast/preadleast.o \
ioleast/pwriteall.o \
ioleast/pwriteleast.o \
ioleast/readall.o \
ioleast/readleast.o \
ioleast/writeall.o \
ioleast/writeleast.o \
locale/localeconv.o \
locale/setlocale.o \
msr/rdmsr.o \
msr/wrmsr.o \
netdb/endnetent.o \
netdb/endprotoent.o \
netdb/endservent.o \
netdb/freeaddrinfo.o \
netdb/gai_strerror.o \
netdb/getaddrinfo.o \
netdb/getnameinfo.o \
netdb/getnetbyaddr.o \
netdb/getnetbyname.o \
netdb/getnetent.o \
netdb/getprotobyname.o \
netdb/getprotobynumber.o \
netdb/getprotoent.o \
netdb/getservbyname.o \
netdb/getservbyport.o \
netdb/getservent.o \
netdb/setnetent.o \
netdb/setprotoent.o \
netdb/setservent.o \
poll/poll.o \
poll/ppoll.o \
psctl/psctl.o \
pthread/pthread_attr_destroy.o \
pthread/pthread_attr_getdetachstate.o \
pthread/pthread_attr_getstacksize.o \
pthread/pthread_attr_init.o \
pthread/pthread_attr_setdetachstate.o \
pthread/pthread_attr_setstacksize.o \
pthread/pthread_condattr_destroy.o \
pthread/pthread_condattr_getclock.o \
pthread/pthread_condattr_init.o \
pthread/pthread_condattr_setclock.o \
pthread/pthread_cond_broadcast.o \
pthread/pthread_cond_destroy.o \
pthread/pthread_cond_init.o \
pthread/pthread_cond_signal.o \
pthread/pthread_cond_timedwait.o \
pthread/pthread_cond_wait.o \
pthread/pthread_create.o \
pthread/pthread_detach.o \
pthread/pthread_equal.o \
pthread/pthread_exit.o \
pthread/pthread_getspecific.o \
pthread/pthread_join.o \
pthread/pthread_key_create.o \
pthread/pthread_key_delete.o \
pthread/pthread_keys.o \
pthread/pthread_mutexattr_destroy.o \
pthread/pthread_mutexattr_gettype.o \
pthread/pthread_mutexattr_init.o \
pthread/pthread_mutexattr_settype.o \
pthread/pthread_mutex_destroy.o \
pthread/pthread_mutex_init.o \
pthread/pthread_mutex_lock.o \
pthread/pthread_mutex_trylock.o \
pthread/pthread_mutex_unlock.o \
pthread/pthread_once.o \
pthread/pthread_rwlock_destroy.o \
pthread/pthread_rwlock_init.o \
pthread/pthread_rwlock_rdlock.o \
pthread/pthread_rwlock_tryrdlock.o \
pthread/pthread_rwlock_trywrlock.o \
pthread/pthread_rwlock_unlock.o \
pthread/pthread_rwlock_wrlock.o \
pthread/pthread_self.o \
pthread/pthread_setspecific.o \
pwd/bcrypt_newhash.o \
pwd/endpwent.o \
pwd/fgetpwent.o \
pwd/fgetpwent_r.o \
pwd/getpwent.o \
pwd/getpwent_r.o \
pwd/getpwnam.o \
pwd/getpwnam_r.o \
pwd/getpwuid.o \
pwd/getpwuid_r.o \
pwd/openpw.o \
pwd/setpwent.o \
sched/sched_yield.o \
scram/scram.o \
semaphore/sem_destroy.o \
semaphore/sem_getvalue.o \
semaphore/sem_init.o \
semaphore/sem_post.o \
semaphore/sem_timedwait.o \
semaphore/sem_trywait.o \
semaphore/sem_wait.o \
signal/kill.o \
signal/killpg.o \
signal/psiginfo.o \
signal/psignal.o \
signal/pthread_sigmask.o \
signal/raise.o \
signal/sigaction.o \
signal/sigaltstack.o \
signal/signal.o \
signal/sigpending.o \
signal/sigprocmask.o \
signal/sigsuspend.o \
stdio/fdio_close.o \
stdio/fdio_install_fd.o \
stdio/fdio_install_path.o \
stdio/fdio_read.o \
stdio/fdio_seek.o \
stdio/fdio_write.o \
stdio/fdopen.o \
stdio/fgetpos.o \
stdio/fileno.o \
stdio/fopen.o \
stdio/fpipe.o \
stdio/fprintf.o \
stdio/freopen.o \
stdio/fsetpos.o \
stdio/getchar.o \
stdio/getchar_unlocked.o \
stdio/getc.o \
stdio/getc_unlocked.o \
stdio/perror.o \
stdio/popen.o \
stdio/printf.o \
stdio/putchar.o \
stdio/putchar_unlocked.o \
stdio/putc.o \
stdio/putc_unlocked.o \
stdio/puts.o \
stdio/removeat.o \
stdio/remove.o \
stdio/renameat.o \
stdio/rename.o \
stdio/scanf.o \
stdio/stderr.o \
stdio/stdin.o \
stdio/stdout.o \
stdio/tmpfile.o \
stdio/vfprintf.o \
stdio/vprintf.o \
stdio/vscanf.o \
stdlib/atexit.o \
stdlib/canonicalize_file_name_at.o \
stdlib/canonicalize_file_name.o \
stdlib/clearenv.o \
stdlib/_Exit.o \
stdlib/exit.o \
stdlib/getenv.o \
stdlib/mkdtemp.o \
stdlib/mkdtemps.o \
stdlib/mkostemp.o \
stdlib/mkostemps.o \
stdlib/mkstemp.o \
stdlib/mkstemps.o \
stdlib/on_exit.o \
stdlib/rand.o \
stdlib/realpath.o \
stdlib/setenv.o \
stdlib/system.o \
stdlib/unsetenv.o \
sys/display/dispmsg_issue.o \
sys/ioctl/ioctl.o \
sys/kernelinfo/kernelinfo.o \
syslog/closelog.o \
syslog/connectlog.o \
syslog/openlog.o \
syslog/setlogmask.o \
syslog/syslog.o \
syslog/vsyslog.o \
sys/mman/mmap.o \
sys/mman/mprotect.o \
sys/mman/munmap.o \
sys/mount/unmountat.o \
sys/mount/unmount.o \
sys/readdirents/readdirents.o \
sys/resource/getpriority.o \
sys/resource/getrlimit.o \
sys/resource/getrusage.o \
sys/resource/prlimit.o \
sys/resource/setpriority.o \
sys/resource/setrlimit.o \
sys/select/select.o \
sys/socket/accept4.o \
sys/socket/accept.o \
sys/socket/bind.o \
sys/socket/connect.o \
sys/socket/getpeername.o \
sys/socket/getsockname.o \
sys/socket/getsockopt.o \
sys/socket/listen.o \
sys/socket/recvfrom.o \
sys/socket/recvmsg.o \
sys/socket/recv.o \
sys/socket/sendmsg.o \
sys/socket/send.o \
sys/socket/sendto.o \
sys/socket/setsockopt.o \
sys/socket/shutdown.o \
sys/socket/sockatmark.o \
sys/socket/socket.o \
sys/socket/socketpair.o \
sys/stat/chmod.o \
sys/stat/fchmodat.o \
sys/stat/fchmod.o \
sys/stat/fstatat.o \
sys/stat/fstat.o \
sys/stat/futimens.o \
sys/stat/getumask.o \
sys/stat/lstat.o \
sys/stat/mkdirat.o \
sys/stat/mkdir.o \
sys/stat/stat.o \
sys/stat/umask.o \
sys/stat/utimensat.o \
sys/stat/utimens.o \
sys/statvfs/fstatvfsat.o \
sys/statvfs/fstatvfs.o \
sys/statvfs/statvfs.o \
sys/termmode/gettermmode.o \
sys/termmode/settermmode.o \
sys/time/gettimeofday.o \
sys/times/times.o \
sys/uio/preadv.o \
sys/uio/pwritev.o \
sys/uio/readv.o \
sys/uio/writev.o \
sys/utsname/uname.o \
sys/wait/wait.o \
sys/wait/waitpid.o \
termios/tcdrain.o \
termios/tcflow.o \
termios/tcflush.o \
termios/tcgetattr.o \
termios/tcgetblob.o \
termios/tcgetsid.o \
termios/tcgetwincurpos.o \
termios/tcgetwinsize.o \
termios/tcsendbreak.o \
termios/tcsetattr.o \
termios/tcsetblob.o \
time/clock_getres.o \
time/clock_gettime.o \
time/clock_gettimeres.o \
time/clock_nanosleep.o \
time/clock.o \
time/clock_settime.o \
time/clock_settimeres.o \
time/ctime.o \
time/ctime_r.o \
time/difftime.o \
time/localtime.o \
time/localtime_r.o \
time/nanosleep.o \
time/timens.o \
time/time.o \
time/timer_create.o \
time/timer_delete.o \
time/timer_getoverrun.o \
time/timer_gettime.o \
time/timer_settime.o \
time/tzset.o \
unistd/access.o \
unistd/alarmns.o \
unistd/alarm.o \
unistd/chdir.o \
unistd/chown.o \
unistd/chroot.o \
unistd/closefrom.o \
unistd/close.o \
unistd/confstr.o \
unistd/crypt_newhash.o \
unistd/dup2.o \
unistd/dup3.o \
unistd/dup.o \
unistd/environ.o \
unistd/execle.o \
unistd/execl.o \
unistd/execlpe.o \
unistd/execlp.o \
unistd/execve.o \
unistd/execv.o \
unistd/execvpe.o \
unistd/execvp.o \
unistd/_exit.o \
unistd/exit_thread.o \
unistd/faccessat.o \
unistd/fchdirat.o \
unistd/fchdir.o \
unistd/fchownat.o \
unistd/fchown.o \
unistd/fchrootat.o \
unistd/fchroot.o \
unistd/fork.o \
unistd/fpathconf.o \
unistd/fsync.o \
unistd/ftruncate.o \
unistd/get_current_dir_name.o \
unistd/getcwd.o \
unistd/getegid.o \
unistd/getentropy.o \
unistd/geteuid.o \
unistd/getgid.o \
unistd/gethostname.o \
unistd/getlogin.o \
unistd/getlogin_r.o \
unistd/getpagesize.o \
unistd/getpgid.o \
unistd/getpid.o \
unistd/getppid.o \
unistd/getuid.o \
unistd/isatty.o \
unistd/lchown.o \
unistd/linkat.o \
unistd/link.o \
unistd/lseek.o \
unistd/memstat.o \
unistd/mkpartition.o \
unistd/pathconf.o \
unistd/pipe2.o \
unistd/pipe.o \
unistd/pread.o \
unistd/pwrite.o \
unistd/readlinkat.o \
unistd/readlink.o \
unistd/read.o \
unistd/rmdir.o \
unistd/setegid.o \
unistd/seteuid.o \
unistd/setgid.o \
unistd/sethostname.o \
unistd/setpgid.o \
unistd/setuid.o \
unistd/sfork.o \
unistd/sleep.o \
unistd/symlinkat.o \
unistd/symlink.o \
unistd/sysconf.o \
unistd/tcgetpgrp.o \
unistd/tcsetpgrp.o \
unistd/tfork.o \
unistd/truncateat.o \
unistd/truncate.o \
unistd/ttyname.o \
unistd/ttyname_r.o \
unistd/unlinkat.o \
unistd/unlink.o \
unistd/usleep.o \
unistd/write.o \
utime/utime.o \

OBJS=\
$(FREEOBJS) \
$(HOSTEDOBJS) \

CRTOBJ=\
crt0.o \
crt1.o \
crti.o \
crtn.o \

MISCOBJ=\
$(CRTOBJ) \

HEADERS:=$(shell find include -type f)

LIBK_OBJS:=$(FREEOBJS:.o=.libk.o)
LIBK_CPPFLAGS:=$(CPPFLAGS) -D__is_sortix_libk
LIBK_FLAGS:=$(FLAGS)
LIBK_CFLAGS:=$(CFLAGS)
LIBK_CXXFLAGS:=$(CXXFLAGS)
ifeq ($(HOST),x86_64-sortix)
    LIBK_FLAGS:=$(LIBK_FLAGS) -mno-red-zone -mno-mmx -mno-sse -mno-sse2
endif

BINS=libc.a libdl.a libpthread.a librt.a $(CRTOBJ)
BINSKERNEL=libk.a
INSTALLLIBS:=$(addprefix $(DESTDIR)$(LIBDIR)/,$(BINS))
INSTALLLIBSKERNEL:=$(addprefix $(DESTDIR)$(LIBDIR)/,$(BINSKERNEL))

all: libs libs-kernel

libs: $(BINS)

libs-kernel: $(BINSKERNEL)

.PHONY: all libs headers clean install install-include-dirs install-headers \
        install-lib-dirs install-libs libs-kernel

FORCE:

libc.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

libdl.a:
	$(AR) rcs $@

libk.a: $(LIBK_OBJS)
	$(AR) rcs $@ $(LIBK_OBJS)

libpthread.a:
	$(AR) rcs $@

librt.a:
	$(AR) rcs $@

crt0.o: $(CPUDIR)/crt0.o
	ln -f $< $@

crt1.o: crt0.o
	cp $< $@

crti.o: $(CPUDIR)/crti.o
	ln -f $< $@

crtn.o: $(CPUDIR)/crtn.o
	ln -f $< $@

# header preprocessing
$(OBJS) $(LIBK_OBJS): $(HEADERS)

headers:

# standard library
%.o: %.c
	$(CC) -c $< -o $@ $(CPPFLAGS) $(FLAGS) $(CFLAGS)

%.o: %.c++
	$(CXX) -c $< -o $@ $(CPPFLAGS) $(FLAGS) $(CXXFLAGS)

%.o: %.S
	$(CC) -c $< -o $@ $(CPPFLAGS) $(FLAGS) $(CFLAGS)

# libk
%.libk.o: %.c
	$(CC) -c $< -o $@ $(LIBK_CPPFLAGS) $(LIBK_FLAGS) $(LIBK_CFLAGS)

%.libk.o: %.c++
	$(CXX) -c $< -o $@ $(LIBK_CPPFLAGS) $(LIBK_FLAGS) $(LIBK_CXXFLAGS)

%.libk.o: %.S
	$(CC) -c $< -o $@ $(LIBK_CPPFLAGS) $(LIBK_FLAGS) $(LIBK_CFLAGS)

clean:
	rm -f *.o */*.o */*/*.o *.a

# Installation into sysroot
install: install-headers install-libs install-libs-kernel

$(DESTDIR)$(LIBDIR):
	mkdir -p $@

$(DESTDIR)$(LIBDIR)/%: %
	cp -P $< $@

$(INSTALLLIBS): | $(DESTDIR)$(LIBDIR)

$(INSTALLLIBSKERNEL): | $(DESTDIR)$(LIBDIR)

install-include-dirs: headers
	mkdir -p $(DESTDIR)$(INCLUDEDIR)

install-headers: install-include-dirs headers
	cp -RTv include $(DESTDIR)$(INCLUDEDIR)

install-lib-dirs: $(DESTDIR)$(LIBDIR)

install-libs: $(INSTALLLIBS)

install-libs-kernel: $(INSTALLLIBSKERNEL)
