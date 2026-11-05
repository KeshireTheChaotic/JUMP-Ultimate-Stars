
void FUN_0215b198(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 != 1) {
    if (param_2 != 2) {
      if (param_2 != 4) {
        return;
      }
      if (*(char *)(iVar2 + iVar1 + 0x4e7) == '\0') {
        func_0x021b65cc();
        FUN_0207342c(0x78,2);
        return;
      }
      FUN_0215b3b0(iVar2,iVar1);
      FUN_0215b67c(iVar2,param_1);
      FUN_0207342c(0x78,0);
      return;
    }
    *(undefined1 *)(iVar2 + 0x4d6) = 0xff;
  }
  FUN_0215b67c(iVar2,param_1,iVar1,param_4,param_4);
  return;
}

