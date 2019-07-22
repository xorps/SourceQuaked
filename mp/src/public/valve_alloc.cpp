#include "tier0/memalloc.h"

namespace valve_alloc {

void *malloc(size_t size) {
	return g_pMemAlloc->Alloc(size);
}

void free(void *p) {
	g_pMemAlloc->Free(p);
}

void *realloc(void *p, size_t size) {
	return g_pMemAlloc->Realloc(p, size);
}

}