#ifndef EXECTHREADS_H_INCLUDED
#define EXECTHREADS_H_INCLUDED
class Execute{
public:
    pthread_t thread_id;
    virtual void exec(void)=0;
    static void *startup(void *ptr_this);
    void start();
};///___________________________________________________________________________________________
#endif // EXECTHREADS_H_INCLUDED

// Nota: este archivo no se cambia, lo mantendré igual.
