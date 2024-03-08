// Функция для проверки неравенства треугольника
int validate_triangle(double side_a, double side_b, double side_c) {
if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
return 1;
} else {
return 0;
}
}
