float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    if (i>j && i>k) {
        result = i;
    } else if (j >i && j>k) {
        result = j;
    } else {
        result = k;
    }
    return result;
}