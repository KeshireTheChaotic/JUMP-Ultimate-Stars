
void FUN_0215b764(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar1 + 0x4ea) == '\0') || ((param_2 & 2) == 0)) {
    if ((*(char *)(iVar1 + 0x4eb) == '\0') || ((param_2 & 8) == 0)) {
      if ((*(char *)(iVar1 + 0x4ec) == '\0') || ((param_2 & 1) == 0)) {
        if ((*(char *)(iVar1 + 0x4ed) != '\0') && ((param_2 & 4) != 0)) {
          *param_3 = *(undefined4 *)(iVar1 + 0x16c);
        }
      }
      else {
        *param_3 = *(undefined4 *)(iVar1 + 0x168);
      }
    }
    else {
      *param_3 = *(undefined4 *)(iVar1 + 0x164);
    }
  }
  else {
    *param_3 = *(undefined4 *)(iVar1 + 0x160);
  }
  if ((param_2 & 0x20) == 0) {
    return;
  }
  func_0x021b65bc();
  FUN_0215bacc(iVar1);
  FUN_0207342c(0x78,1);
  return;
}

