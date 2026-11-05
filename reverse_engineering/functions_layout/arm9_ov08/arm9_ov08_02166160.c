
void FUN_02166160(undefined4 param_1,int param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  if ((int)(uint)*(ushort *)(param_2 + 6) <= (int)*(short *)(param_2 + 4)) {
    *(undefined1 *)(param_2 + 9) = 0;
    FUN_021677a0(1,param_1);
  }
  return;
}

