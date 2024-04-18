mpi_test:
	mpicc -o mpi_test mpi_test.c

clean:
	rm -f *.o mpi_test
