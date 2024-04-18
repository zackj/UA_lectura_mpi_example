#include <mpi.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    MPI_Init(NULL, NULL);
    int rank;
    int world;
    int i;

    char hostname[1024];
    hostname[1023] = '\0';
    gethostname(hostname, 1023);

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world);
    printf("rank %d is on hostname: %s\n",rank, hostname);
    MPI_Finalize();
}