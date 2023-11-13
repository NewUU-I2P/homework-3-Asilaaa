float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    switch (int(operation)) {
        case 42:
            result = x * y;
            break;
        case 43:
            result = x + y;
            break;
        case 45:
            result = x - y;
            break;
        case 47:
            result = x / y;
            break;
    }
   return result;
}