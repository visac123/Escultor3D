#include <iostream>
#include <string>
#include <sculptor.h>


using namespace std;

int main()
{
   //ALOCAÇÃO DINAMICA DA MATRIZ DE VOXELS

    Voxel ***v;
    int nx,ny,nz;

    v = (Voxel ***) malloc(nz * sizeof(Voxel**));
    v[0] =(Voxel **) malloc(nz*ny* sizeof(Voxel*));
    v[0][0] = (Voxel *) malloc(nx*ny*nz*sizeof (Voxel));

    for(int i=1; i<nz; i++){
        v[i] = v[i-1] + ny;
    }
    for(int i=1; i<nz*ny; i++){
        v[0][i] = v[0][i-1] + nx;
    }



    return 0;
}
