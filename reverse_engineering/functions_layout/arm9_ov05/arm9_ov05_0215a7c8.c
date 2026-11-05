
undefined4 FUN_0215a7c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return *(undefined4 *)(param_2 * 0x14 + param_1 + 0xb8);
  }
  iVar2 = (int)*(char *)(param_1 + 0x4da);
  iVar1 = (int)*(char *)(param_1 + 0x4d8) + param_2 + iVar2;
  if (iVar1 < iVar2) {
    param_2 = param_2 + (iVar2 - iVar1);
  }
  else if (3 < iVar1) {
    param_2 = param_2 + (3 - iVar1);
  }
  return *(undefined4 *)
          (param_2 * 0x14 + param_1 +
           ((4 - *(char *)(param_1 + 0x4d9)) - (int)*(char *)(param_1 + 0x4d7)) * 4 + 0xa8);
}

