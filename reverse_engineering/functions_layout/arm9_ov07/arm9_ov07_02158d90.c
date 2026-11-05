
void FUN_02158d90(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0xc) = 8;
    return;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 8) = 3;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

