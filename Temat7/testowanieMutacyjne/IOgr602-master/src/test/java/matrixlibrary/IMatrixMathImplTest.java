package matrixlibrary;

import matrixlibrary.*;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;

import static org.junit.Assert.*;

/**
 * Created by koden on 30/05/2016.
 */
public class IMatrixMathImplTest {
    IMatrix m1, m2;
    IMatrixMath math;

    @Before
    public void setUp() throws Exception {
        math = new IMatrixMathImpl();
        m1 = new IMatrixImpl(1, 1);
        m1.setMatrixValues(new double[][]
                {{1, 2, 3, 4},
                        {2, 3, 4, 5},
                        {3, 4, 5, 6},
                        {4, 5, 6, 7}});
        m2 = new IMatrixImpl(1, 1);
        m2.setMatrixValues(new double[][]{
                {9, 8, 7, 6},
                {8, 7, 6, 5},
                {7, 6, 5, 4},
                {6, 5, 4, 3}});

    }

    @After
    public void tearDown() throws Exception {

    }

    @Test
    public void testMatrixAddition() throws Exception {
        IMatrix m3 = math.matrixAddition(m1, m2);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                assertEquals(m3.getMatrixValue(i, j), 10, 1e-12);
            }
        }
    }

    @Test
    public void testMatrixSubtracting() throws Exception {
        double[][] expectedResults = new double[][]{{-8, -6, -4, -2}, {-6, -4, -2, 0}, {-4, -2, 0, 2}, {-2, 0, 2, 4}};
        IMatrix m3 = math.matrixSubtracting(m1, m2);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                assertEquals(m3.getMatrixValue(i, j), expectedResults[i][j], 1e-12);
            }
        }
    }

    @Test
    public void testScalarMultiplication() throws Exception {
        double[][] expectedResults = new double[][]{{10, 20, 30, 40}, {20, 30, 40, 50}, {30, 40, 50, 60}, {40, 50, 60, 70}};
        double sc = 10;
        IMatrix m3 = math.scalarMultiplication(m1, sc);
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                assertEquals(expectedResults[i][j], m3.getMatrixValue(i, j), 1e-12);
            }
        }
    }

    @Test
    public void testInverseMatrix() throws Exception {

        IMatrix m = new IMatrixImpl(5, 5);
        //Za duże;
        assertEquals(math.inverseMatrix(m), null);

        //det(m2)==0
        assertEquals(math.inverseMatrix(m2), null);

        m.setMatrixValues(new double[][]{{1, 2, 2}, {1, 1, 0}, {2, 0, 0}});
        double[][] expectedResults = new double[][]{{0, 0, 0.5}, {0, 1, -1}, {0.5, -0.5, 0.25}};
        m = math.inverseMatrix(m);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                assertEquals(expectedResults[i][j], m.getMatrixValue(i, j), 1e-12);
            }
        }

        m.setMatrixValues(new double[][]{{1, 2}, {1, 1}});
        expectedResults = new double[][]{{-1, 2}, {1, -1}};
        m = math.inverseMatrix(m);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                assertEquals(expectedResults[i][j], m.getMatrixValue(i, j), 1e-12);
            }
        }
    }

    @Test
    public void testMatrixMultiplication() throws Exception {
        // TODO: 05/06/2016 Add test here
    }

    @Test
    public void testMatrixTransposition() throws Exception {
        // TODO: 05/06/2016 Add test here
    }
}