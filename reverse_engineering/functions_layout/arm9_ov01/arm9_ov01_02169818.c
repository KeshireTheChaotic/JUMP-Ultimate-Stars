
void FUN_02169818(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0208678c();
  if (iVar1 != 0) {
    FUN_0208678c();
    iVar1 = FUN_020869b8();
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169781);
      return;
    }
  }
  if (*(char *)(iVar2 + 0x34) == '\0') {
    iVar1 = func_0x021bacf4(*(undefined4 *)(iVar2 + 0x30));
    if (iVar1 != 0) {
      func_0x021bace0(*(undefined4 *)(iVar2 + 0x30));
      while (iVar1 = func_0x021bacf4(*(undefined4 *)(iVar2 + 0x30)), iVar1 != 0) {
        FUN_02026fb8(param_1);
      }
    }
    func_0x021bac28(*(undefined4 *)(iVar2 + 0x30),0x4e,0,0,0,0,0,0,param_4);
  }
  FUN_02169890(param_1);
  return;
}

