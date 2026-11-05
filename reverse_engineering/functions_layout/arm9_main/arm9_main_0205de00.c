
void FUN_0205de00(int param_1,int param_2)

{
  if (-1 < *(int *)(param_1 + 0x110) << 0x1e) {
    FUN_0205dd64();
    return;
  }
  if (param_2 == 0) {
    FUN_0205dd64();
    return;
  }
  FUN_0205e090(param_1 + 0xe8,0);
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 8;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}

