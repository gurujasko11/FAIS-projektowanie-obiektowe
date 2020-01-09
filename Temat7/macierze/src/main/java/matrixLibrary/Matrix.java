package matrixLibrary;

public class Matrix {

    public static Matrix multipleMatrices(Matrix m1, Matrix m2) {
        Matrix result = new Matrix();
        float tmpResult[] = new float[3];
        for(int x=0; x<3; x++) {
            for(int y=0; y<3; y++) {
                for(int i=0; i<3; i++) {
                    tmpResult[i] = m1.getElementValue(x,i) * m2.getElementValue(i,y);
                }
                result.setElementValue(x,y,tmpResult[0] + tmpResult[1] + tmpResult[2]);
            }
        }
        return result;
    }

    public static boolean compareMatrices(Matrix m1, Matrix m2) {
        for(int x=0; x<3; x++) {
            for(int y=0; y<3; y++) {
                if(m1.getElementValue(x,y) != m2.getElementValue(x,y)) {
                    return false;
                }
            }
        }
        return true;
    }

    public Matrix() {
    this.data = new float[3][3];
    }

    public Matrix(float matrix[][]) {
        this.data = new float[3][3];
        try {
            for(int i=0; i<3; i++) {
                for(int j=0; j<3;j++) {
                    this.data[i][j] = matrix[i][j];
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            for(int i=0; i<3; i++) {
                for(int j=0; j<3;j++) {
                    this.data[i][j] = 0;
                }
            }
        }
    }

    public void setElementValue(int x, int y, float v) {
        this.data[x][y] = v;
    }

    public float getElementValue(int x, int y) {
        return this.data[x][y];
    }

    private float[][] data;

}
