//
// added to aid in static linkage
//
extern "C" {

// CRT new symbols
int _stricmp(const char *, const char *);
char *_strdup(const char *);
int _strnicmp(const char *, const char *, int);
char *_strlwr(char *);
int _wcsicmp(const wchar_t *, const wchar_t *);

// CRT deprecated symbols not found in static crt
int __cdecl stricmp(const char *s1, const char *s2) {
    return _stricmp(s1, s2);
}

int __cdecl strcmpi(const char *s1, const char *s2) {
    return _stricmp(s1, s2);
}

char * __cdecl strdup(const char *str) {
    return _strdup(str);
}

int __cdecl strnicmp(const char *s1, const char *s2, int n) {
    return _strnicmp(s1, s2, n);
}

char * __cdecl strlwr(char *start) {
    return _strlwr(start);
}

int __cdecl wcsicmp(const wchar_t *s1, const wchar_t *s2) {
    return _wcsicmp(s1, s2);
}

}