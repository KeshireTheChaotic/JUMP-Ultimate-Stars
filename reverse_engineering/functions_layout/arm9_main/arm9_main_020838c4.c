
bool FUN_020838c4(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x88);
  if (uVar2 == 0) {
    param_1 = *(int *)(iVar1 + 0x8c);
  }
  if (uVar2 == 0 && param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return (*(uint *)(iVar1 + 0x78) & 0x8000000) != 0;
  }
  if (((-1 < (int)uVar2) && (uVar2 < param_2)) && (*(short *)(*(int *)(iVar1 + 0x5c) + 0x24) < 0)) {
    return true;
  }
  if ((((int)*(uint *)(iVar1 + 0x8c) < 0) || (param_2 <= *(uint *)(iVar1 + 0x8c))) ||
     (*(short *)(*(int *)(iVar1 + 0x5c) + 0x24) < 1)) {
    return false;
  }
  return true;
}

