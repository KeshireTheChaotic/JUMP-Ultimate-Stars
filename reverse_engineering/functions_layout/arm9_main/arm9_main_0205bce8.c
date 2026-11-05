
void FUN_0205bce8(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x48) + -1 < param_2) {
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + param_2 + 0x4c);
  *(undefined4 *)(&DAT_020adf5c + uVar2 * 8) = param_3;
  uVar1 = FUN_02057530(*(int *)(param_1 + 0x3c) + *(int *)(&DAT_020adf5c + uVar2 * 8));
  FUN_020567e8(1 << uVar2,uVar1 & 0xff,(int)uVar1 >> 8);
  return;
}

