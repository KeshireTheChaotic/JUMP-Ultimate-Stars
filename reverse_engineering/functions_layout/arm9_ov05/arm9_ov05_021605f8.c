
void FUN_021605f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bad2c(*puVar2);
  if (iVar1 != 0) {
    iVar1 = func_0x021bad78(*puVar2);
    if (iVar1 < 0x6e) {
      if (((iVar1 < 0x6d) && (iVar1 < 0x37)) && (0x33 < iVar1)) {
        if ((iVar1 == 0x34) || (iVar1 == 0x35)) {
LAB_02160646:
          FUN_02028384(*(undefined4 *)(param_1 + 4),0x2160675);
          return;
        }
        if (iVar1 == 0x36) goto LAB_0216063c;
      }
    }
    else if (iVar1 < 0x76) {
      if (iVar1 == 0x75) {
LAB_0216063c:
        FUN_02028384(*(undefined4 *)(param_1 + 4),0x21603fd);
        return;
      }
    }
    else if (iVar1 == 0x76) goto LAB_02160646;
    iVar1 = func_0x021bacfc(*puVar2);
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x21603fd);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2160675);
  }
  return;
}

