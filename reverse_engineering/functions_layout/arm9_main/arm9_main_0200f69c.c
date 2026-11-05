
void FUN_0200f69c(undefined1 *param_1,int param_2)

{
  if (param_1 == (undefined1 *)0x0 || param_2 == 0) {
    return;
  }
  do {
    *param_1 = 0;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return;
}

