namespace valve_alloc {
    void *malloc(size_t);
    void free(void *);
    void *realloc(void *, size_t);
}

extern "C" {
    void *__cdecl malloc(size_t size) { return valve_alloc::malloc(size); }
    void __cdecl free(void *p) { valve_alloc::free(p); }
    void *__cdecl realloc(void *p, size_t size) { return valve_alloc::realloc(p, size); }
}