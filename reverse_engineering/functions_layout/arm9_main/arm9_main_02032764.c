
void FUN_02032764(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_020250f8(*(undefined4 *)(param_1 + 4),param_2 & 0xffffff,param_3,param_4,param_4);
  *(ushort *)(*(int *)(*(int *)(param_1 + 4) + 100) + 0x4a) = (ushort)(byte)(param_2 >> 0x18);
  return;
}

