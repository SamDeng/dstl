#ifndef D_ALLOC_H
#define D_ALLOC_H

#include <stddef.h>





namespace dstl{


class allocator{
    
	public:
	//explicit allocator(const char* pName = 
	allocator& operator=(const allocator& x);
	
	void* allocate(size_t n, int flags = 0);
	
	void* allocate(size_t n, size_t alignment, size_t offset, int flags = 0);
	
	void deallocate(void* p, size_t n);
	
	
	
};
    
	bool operator==(const allocator& a, const allocator& b);
	bool operator!=(const allocator& a, const allocator& b);
	
	












#endif


