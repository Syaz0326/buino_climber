// char *zeroFill(int num, int digits) {
//   char return_string[digits + 1];
//   snprintf(return_string, digits + 1, "%d", num);
//   char *zero_fill;
//   while(num > 0) {
//     zero_fill = strcat(zero_fill, "0");
//     num /= 10;
//   }
// 
//   snprintf(return_string, digits + 1, "%c", zero_fill);
// 
//   return return_string;
// }