package matrixLibrary;

import junit.framework.TestCase;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static junit.framework.Assert.assertEquals;
import static junit.framework.TestCase.assertFalse;
import static junit.framework.TestCase.fail;

public class MatrixTest {
    Matrix m0, m1, m2, m3, m4, m5, m6, m7, m8, m9;
    @Before
    public void setUp() throws Exception {
        m0 = new Matrix();
        m1 = new Matrix(new float[][]{
                {1, 0, 0},
                {0, 1, 0},
                {0, 0, 1},
        });
        m2 = new Matrix(new float[][]{
                {0, 1, 2},
                {3, 4, 5},
                {6, 7, 8},
        });
        m3 = new Matrix(new float[][]{
                {9, 8, 7},
                {6, 5, 4},
                {3, 2, 1},
        });
        m4 = new Matrix(new float[][]{
                {12, 9, 6},
                {66, 54, 42},
                {120, 99, 78},
        });
        m5 = new Matrix(new float[][]{
                {-7, 1249, 56},
                {66, 2, -7},
                {0, 0, 0},
        });
        m6 = new Matrix(new float[][]{
                {12, 0, 6},
                {66, 0, 42},
                {120, 0, 78},
        });
        m7 = new Matrix(new float[][]{
                {510, 15006, 609},
                {3102, 82542, 3318},
                {5694, 150078, 6027},
        });
        m8 = new Matrix(new float[][]{
                {89070, 0, 56784},
                {84, 0, -66},
                {0, 0, 0},
        });
        m9 = new Matrix(new float[][]{
                {89070, 0, 56784},
                {84, 0, -66},
                {0, 0, 1},
        });

    }

    @After
    public void tearDown() throws Exception {

    }

    @Test
    public void matrixCompareTest() {
        boolean result = Matrix.compareMatrices(m1, m1);
        assert (result == true);
        result = Matrix.compareMatrices(m8, m9);
        assert (result == false);
        result = Matrix.compareMatrices(m1, m9);
        assert (result == false);
        result = Matrix.compareMatrices(m0, new Matrix());
        assert (result == true);
    }

    @Test
    public void matrixMultiplicationTest() {
        Matrix result = Matrix.multipleMatrices(m1, m1);
        assert(Matrix.compareMatrices(result,m1));
        result = Matrix.multipleMatrices(m1, m2);
        assert(Matrix.compareMatrices(result,m2));
        result = Matrix.multipleMatrices(m2, m3);
        assert(Matrix.compareMatrices(result,m4));
        result = Matrix.multipleMatrices(m0, m0);
        assert(Matrix.compareMatrices(result,m0));
        result = Matrix.multipleMatrices(m4, m5);
        assert(Matrix.compareMatrices(result,m7));
        result = Matrix.multipleMatrices(m5, m6);
        assert(Matrix.compareMatrices(result,m8));
    }
}
