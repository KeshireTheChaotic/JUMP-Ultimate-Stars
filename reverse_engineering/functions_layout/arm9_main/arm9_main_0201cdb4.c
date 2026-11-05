
void FUN_0201cdb4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + -1;
  param_1 = param_1 + ((int)(uint)*(ushort *)(param_2 + 6) >> 8) * 4;
  if (*(int *)(param_1 + 0xc) == param_2) {
    if ((uint)*(ushort *)(*(int *)(param_2 + 0xc) + 6) == (uint)*(ushort *)(param_2 + 6)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_2 + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

