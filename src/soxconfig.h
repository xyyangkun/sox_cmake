/* src/soxconfig.h.  Generated from soxconfig.h.in by configure.  */
/* src/soxconfig.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Distribution name */
/* #undef DISTRO */

/* Define to dlopen() lame */
/* #undef DL_LAME */

/* Define to dlopen() libsndfile */
/* #undef DL_LIBSNDFILE */

/* Define to dlopen() mad */
/* #undef DL_MAD */

/* Define to dlopen() opencore-amrnb */
/* #undef DL_OPENCORE_AMRNB */

/* Define to dlopen() opencore-amrwb */
/* #undef DL_OPENCORE_AMRWB */

/* Define to dlopen() twolame */
/* #undef DL_TWOLAME */

/* Define to dlopen() vo-amrwbenc */
/* #undef DL_VO_AMRWBENC */

/* Define if alsa is enabled */
#define HAVE_ALSA 1

/* Define to 1 if you have the <alsa/asoundlib.h> header file. */
#define HAVE_ALSA_ASOUNDLIB_H 1

/* Define if amrnb is enabled */
/* #undef HAVE_AMRNB */

/* Define if amrwb is enabled */
/* #undef HAVE_AMRWB */

/* Define if ao is enabled */
/* #undef HAVE_AO */

/* Define to 1 if you have the <ao/ao.h> header file. */
/* #undef HAVE_AO_AO_H */

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define if coreaudio is enabled */
/* #undef HAVE_COREAUDIO */

/* Define to 1 if you have the <CoreAudio/CoreAudio.h> header file. */
/* #undef HAVE_COREAUDIO_COREAUDIO_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define if flac is enabled */
/* #undef HAVE_FLAC */

/* Define to 1 if you have the `fmemopen' function. */
#define HAVE_FMEMOPEN 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define if glob.h exists */
#define HAVE_GLOB_H 1

/* Define if gsm is enabled */
/* #undef HAVE_GSM */

/* Define to 1 if you have the <gsm/gsm.h> header file. */
/* #undef HAVE_GSM_GSM_H */

/* Define to 1 if you have the <gsm.h> header file. */
/* #undef HAVE_GSM_H */

/* Define if id3_file_open exists in -l$sox_wl */
/* #undef HAVE_ID3TAG */

/* Define to 1 if you have the <id3tag.h> header file. */
/* #undef HAVE_ID3TAG_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if LADSPA support is enabled */
/* #undef HAVE_LADSPA_H */

/* Define if lame_init exists in -l$sox_wl */
/* #undef HAVE_LAME */

/* Define to 1 if you have the <lame.h> header file. */
/* #undef HAVE_LAME_H */

/* Define to 1 if you have the <lame/lame.h> header file. */
/* #undef HAVE_LAME_LAME_H */

/* Define if snd_pcm_open exists in -lasound */
#define HAVE_LIBALSA 1

/* Define if ao_play exists in -lao */
/* #undef HAVE_LIBAO */

/* Define if AudioDeviceStart exists in -Wl,-framework,CoreAudio */
/* #undef HAVE_LIBCOREAUDIO */

/* Define if gsm_create exists in -l$sox_wl */
/* #undef HAVE_LIBGSM */

/* Define if create_lpc10_encoder_state exists in -llpc10 */
/* #undef HAVE_LIBLPC10 */

/* Define if lt_dlinit exists in -l$sox_wl */
/* #undef HAVE_LIBLTDL */

/* Define if pa_simple_new exists in -lpulse -lpulse-simple */
/* #undef HAVE_LIBPULSEAUDIO */

/* Define if sf_open_virtual exists in -l$sox_wl */
/* #undef HAVE_LIBSNDFILE */

/* Define if sio_open exists in -lsndio */
/* #undef HAVE_LIBSNDIO */

/* Define if waveOutOpen exists in -lwinmm */
/* #undef HAVE_LIBWAVEAUDIO */

/* Define if WavpackGetSampleRate exists in -lwavpack */
/* #undef HAVE_LIBWAVPACK */

/* Define if lpc10 is enabled */
/* #undef HAVE_LPC10 */

/* Define to 1 if you have the <lpc10.h> header file. */
/* #undef HAVE_LPC10_H */

/* Define to 1 if you have the `lrint' function. */
#define HAVE_LRINT 1

/* Define to 1 if you have the <ltdl.h> header file. */
/* #undef HAVE_LTDL_H */

/* Define if mad_stream_buffer exists in -l$sox_wl */
/* #undef HAVE_MAD */

/* Define to 1 if you have the <mad.h> header file. */
/* #undef HAVE_MAD_H */

/* Define if magic_open exists in -l$sox_wl */
/* #undef HAVE_MAGIC */

/* Define to 1 if you have the <magic.h> header file. */
/* #undef HAVE_MAGIC_H */

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <mmsystem.h> header file. */
/* #undef HAVE_MMSYSTEM_H */

/* Define if mp3 is enabled */
/* #undef HAVE_MP3 */

/* Define if oggvorbis is enabled */
/* #undef HAVE_OGGVORBIS */

/* Define if Decoder_Interface_init exists in -l$sox_wl */
/* #undef HAVE_OPENCORE_AMRNB */

/* Define to 1 if you have the <opencore-amrnb/interf_dec.h> header file. */
/* #undef HAVE_OPENCORE_AMRNB_INTERF_DEC_H */

/* Define if D_IF_init exists in -l$sox_wl */
/* #undef HAVE_OPENCORE_AMRWB */

/* Define to 1 if you have the <opencore-amrwb/dec_if.h> header file. */
/* #undef HAVE_OPENCORE_AMRWB_DEC_IF_H */

/* Define if opus is enabled */
/* #undef HAVE_OPUS */

/* Define if oss is enabled */
/* #undef HAVE_OSS */

/* Define if png_set_rows exists in -l$sox_wl $ZLIB_LIBS */
/* #undef HAVE_PNG */

/* Define to 1 if you have the <png.h> header file. */
/* #undef HAVE_PNG_H */

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define if pulseaudio is enabled */
/* #undef HAVE_PULSEAUDIO */

/* Define to 1 if you have the <pulse/simple.h> header file. */
/* #undef HAVE_PULSE_SIMPLE_H */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define if sndfile is enabled */
/* #undef HAVE_SNDFILE */

/* Define to 1 if you have the <sndfile.h> header file. */
/* #undef HAVE_SNDFILE_H */

/* Define if sndio is enabled */
/* #undef HAVE_SNDIO */

/* Define to 1 if you have the <sndio.h> header file. */
/* #undef HAVE_SNDIO_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if sunaudio is enabled */
/* #undef HAVE_SUNAUDIO */

/* Define to 1 if you have the <sun/audioio.h> header file. */
/* #undef HAVE_SUN_AUDIOIO_H */

/* Define to 1 if you have the <sys/audioio.h> header file. */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define if twolame_init exists in -l$sox_wl */
/* #undef HAVE_TWOLAME */

/* Define to 1 if you have the <twolame.h> header file. */
/* #undef HAVE_TWOLAME_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if E_IF_init exists in -l$sox_wl */
/* #undef HAVE_VO_AMRWBENC */

/* Define to 1 if you have the <vo-amrwbenc/enc_if.h> header file. */
/* #undef HAVE_VO_AMRWBENC_ENC_IF_H */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if waveaudio is enabled */
/* #undef HAVE_WAVEAUDIO */

/* Define if wavpack is enabled */
/* #undef HAVE_WAVPACK */

/* Define to 1 if you have the <wavpack/wavpack.h> header file. */
/* #undef HAVE_WAVPACK_WAVPACK_H */

/* Define if uncompress exists in -lz */
#define HAVE_ZLIB 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "sox"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "sox-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "SoX"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "SoX 14.4.3git"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sox"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "14.4.3git"

/* Define if alsa is linked in */
#define STATIC_ALSA 1

/* Define if amrnb is linked in */
/* #undef STATIC_AMRNB */

/* Define if amrwb is linked in */
/* #undef STATIC_AMRWB */

/* Define if ao is linked in */
/* #undef STATIC_AO */

/* Define if coreaudio is linked in */
/* #undef STATIC_COREAUDIO */

/* Define if flac is linked in */
/* #undef STATIC_FLAC */

/* Define if gsm is linked in */
/* #undef STATIC_GSM */

/* Define if lpc10 is linked in */
/* #undef STATIC_LPC10 */

/* Define if mp3 is linked in */
/* #undef STATIC_MP3 */

/* Define if oggvorbis is linked in */
/* #undef STATIC_OGGVORBIS */

/* Define if opus is linked in */
/* #undef STATIC_OPUS */

/* Define if oss is linked in */
/* #undef STATIC_OSS */

/* Define if pulseaudio is linked in */
/* #undef STATIC_PULSEAUDIO */

/* Define if sndfile is linked in */
/* #undef STATIC_SNDFILE */

/* Define if sndio is linked in */
/* #undef STATIC_SNDIO */

/* Define if sunaudio is linked in */
/* #undef STATIC_SUNAUDIO */

/* Define if waveaudio is linked in */
/* #undef STATIC_WAVEAUDIO */

/* Define if wavpack is linked in */
/* #undef STATIC_WAVPACK */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "14.4.3git"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
