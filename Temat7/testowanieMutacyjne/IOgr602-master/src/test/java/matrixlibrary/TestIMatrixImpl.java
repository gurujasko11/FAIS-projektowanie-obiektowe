package matrixlibrary;

import static junit.framework.TestCase.assertEquals;
import static junit.framework.TestCase.fail;

import junit.framework.Assert;
import org.junit.Test;

public class TestIMatrixImpl {
    private IMatrixImpl iMatrixImpl;
    private int MATRIX_WIDTH;
    private int MATRIX_HEIGHT;

    @Test(expected = IllegalArgumentException.class)
    public void createIdentityMatrixShouldThrowIllegalArgumentExceptionAtZero() {
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.createIdentityMatrix(0);
    }
    @Test(expected = IllegalArgumentException.class)
    public void createIdentityMatrixShouldThrowIllegalArgumentExceptionAtNegative() {
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.createIdentityMatrix(-1);
    }
    @Test
    public void testCreateIdentityMatrix() {
        MATRIX_WIDTH = MATRIX_HEIGHT = 6;
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.createIdentityMatrix(MATRIX_WIDTH);
        for (int i = 0; i < MATRIX_WIDTH; i++) {
            for (int j = 0; j < MATRIX_HEIGHT; j++) {
                if (i == j) {
                    assertEquals(iMatrixImpl.getMatrixValue(i, j), 1.0);
                } else {
                    assertEquals(iMatrixImpl.getMatrixValue(i, j), 0.0);
                }
            }
        }
    }
    @Test
    public void testCreateMatrix() {
        iMatrixImpl = new IMatrixImpl(new double[][]{
                {0,1,2},
                {3,4,5},
                {6,7,8},
        });
        assertEquals(iMatrixImpl.toString(),"0.0 3.0 6.0 \n1.0 4.0 7.0 \n2.0 5.0 8.0 \n");

    }
    @Test
    public void testDeterminant() throws InvalidDimensionException {
        //MATRIX_WIDTH = MATRIX_HEIGHT = 6;
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.setMatrixValues(new double[][]{
                {1,2,3},
                {2,3,4},
                {3,4,5},
        });
        assertEquals(iMatrixImpl.determinant(),0.0);
        iMatrixImpl.setMatrixValues(new double[][]{
                {1,2},
                {0,1},
        });
        assertEquals(iMatrixImpl.determinant(),1.0);
        iMatrixImpl.setMatrixValues(new double[][]{
                {1,2},
                {1,2},
        });
        assertEquals(iMatrixImpl.determinant(),0.0);
        iMatrixImpl.setMatrixValues(new double[][]{
                {1.5},
        });
        assertEquals(iMatrixImpl.determinant(),1.5);


    }

    @Test
    public void testGetMatrixValue() {
        iMatrixImpl = new IMatrixImpl(6, 6);}
    @Test
    public void testSetMatrixValue() {
        iMatrixImpl = new IMatrixImpl(6, 6);}
    @Test
    public void testSetMatrixValues() {
        iMatrixImpl = new IMatrixImpl(6, 6);}
    @Test
    public void testToString() {
        iMatrixImpl = new IMatrixImpl(6, 6);
        iMatrixImpl.createIdentityMatrix(3);
        assertEquals(iMatrixImpl.toString(),"1.0 0.0 0.0 \n0.0 1.0 0.0 \n0.0 0.0 1.0 \n");
        iMatrixImpl = new IMatrixImpl(1,5);
        double [][] arr = new double[1][5];
        for(int i=0;i<5;i++)
        {
            arr[0][i]=i;
        }
        iMatrixImpl.setMatrixValues(arr);
        assertEquals(iMatrixImpl.toString(),"0.0 \n1.0 \n2.0 \n3.0 \n4.0 \n");
    }

    @Test
    public void testWeightHight(){
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.setMatrixValues(new double[][]{
                {1,2},
                {2,3},
                {3,4},
        });
        Assert.assertEquals(iMatrixImpl.getHeight(),2);
        Assert.assertEquals(iMatrixImpl.getWidth(),3);
    }

    @Test
    public void testSetValue()
    {
        iMatrixImpl = new IMatrixImpl();
        iMatrixImpl.createIdentityMatrix(3);
        iMatrixImpl.setMatrixValue(1,1,5);
        assertEquals(iMatrixImpl.getMatrixValue(1,1),5.0);
    }
}
