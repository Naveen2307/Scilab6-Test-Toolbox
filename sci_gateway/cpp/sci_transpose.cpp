extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "transpose.h"




static const char fname[] = "transpose";
int sci_multiply(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	double* in1 = NULL;
	double* out1 = NULL;
	int row=0;
	int col=0;
	int size=0;
	
    if (nin != 1)
    {
        Scierror(999, _("%s: Wrong number of input arguments: %d expected.\n"), fname, 1);
        return SCILAB_ERROR;
    }

    if (nout != 1)
    {
        Scierror(999, _("%s: Wrong number of output arguments: %d expected.\n"), fname, 1);
        return SCILAB_ERROR;
    }
    if (scilab_isDouble(env, in[0]) == 0 || scilab_isSquare(env, in[0]) == 0)
    {
        Scierror(999, _("%s: Wrong type for input argument #%d: A double matrix expected.\n"), fname, 1);
        return SCILAB_ERROR;
    }
	
	size = scilab_getDim2d(env, in[0], &row, &col);
	scilab_getDoubleArray(env, in[0], &in1);
 
	double arr[n][n];
	int i;
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	arr[i][j]= (*(*(in1+i)+j));
	}
	}

	double b[n][n];
	transpose(row,b,a);
	
	out[0]=scilab_createDoubleMatrix2d(env, row,col, 0);

	out[0]=b;

return 0;
}
}
