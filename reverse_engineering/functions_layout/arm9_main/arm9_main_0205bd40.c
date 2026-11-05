
void FUN_0205bd40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x48) < 1) {
    return;
  }
  do {
    uVar3 = (uint)*(byte *)(param_1 + iVar2 + 0x4c);
    uVar1 = FUN_02057530(*(int *)(param_1 + 0x3c) + *(int *)(&DAT_020adf5c + uVar3 * 8));
    FUN_020567e8(1 << uVar3,uVar1 & 0xff,(int)uVar1 >> 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x48));
  return;
}

