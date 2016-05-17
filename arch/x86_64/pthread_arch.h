
struct {
	struct pthread * p;
} __pthread_arch_pthread_self_p;
struct pthread __pthread_arch_pthread_self_i;

static inline struct pthread *__pthread_self()
{
	if (!__pthread_arch_pthread_self_p.p) {
		__pthread_arch_pthread_self_p.p = &__pthread_arch_pthread_self_i;
	}
	return __pthread_arch_pthread_self_p.p;
}

#define TP_ADJ(p) (p)

#define MC_PC gregs[REG_RIP]
