float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float RemainingAmountOfWater;
    cost = 13;

    if (consumed_water >= 30) {
        cost += 30 * 0.4;
        RemainingAmountOfWater = consumed_water - 30;
        if (RemainingAmountOfWater >= 20) {
            cost += 20 * 0.12;
            RemainingAmountOfWater -= 20;
            if (RemainingAmountOfWater >= 10) {
                cost += 10 * 1.4;
                RemainingAmountOfWater -= 10;
                cost += RemainingAmountOfWater * 1.5;
            } else {
                cost += RemainingAmountOfWater * 1.5;
            }
        } else if (RemainingAmountOfWater >= 10) {
            cost += 10 * 1.4;
            RemainingAmountOfWater -= 10;
            cost += RemainingAmountOfWater * 1.5;
        }
    } else if (RemainingAmountOfWater >= 20) {
        cost += 20 * 0.12;
        RemainingAmountOfWater -= 20;
        if (RemainingAmountOfWater >= 10) {
            cost += 10 * 1.4;
            RemainingAmountOfWater -= 10;
            cost += RemainingAmountOfWater * 1.5;
        } else {
            cost += RemainingAmountOfWater * 1.5;
        }
        return cost;
    }
}