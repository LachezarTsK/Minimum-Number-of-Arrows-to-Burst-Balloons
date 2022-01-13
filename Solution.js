
/**
 * @param {number[][]} points
 * @return {number}
 */
var findMinArrowShots = function (points) {

    points.sort((x, y) => (x[1] - y[1]));

    let arrows = 1;
    let minEnd = points[0][1];
    let size = points.length;

    for (let i = 1; i < size; i++) {
        if (points[i][0] > minEnd) {
            minEnd = points[i][1];
            arrows++;
        }
    }
    return arrows;
};
