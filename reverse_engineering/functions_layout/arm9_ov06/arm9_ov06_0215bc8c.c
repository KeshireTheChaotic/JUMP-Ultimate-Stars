
bool FUN_0215bc8c(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x6c) & 0xc) == 0) {
    iVar1 = FUN_0215bc10(*(undefined4 *)(param_1 + 0x1a0));
    if (iVar1 == 0) {
      *(undefined2 *)(param_1 + 0xce) = 0x28;
    }
    return iVar1 == 0;
  }
  if ((*(uint *)(param_1 + 0x6c) & 8) == 0) {
    FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),1);
  }
  else {
    FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),0);
  }
  *(code **)(param_1 + 0xfc) = FUN_0215bd18;
  iVar1 = *(int *)(param_1 + 0x1a4);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x5a) != -1)) {
    *(short *)(iVar1 + 0x5a) = *(short *)(iVar1 + 0x5a) + 1;
  }
  return false;
}

