
void FUN_0215dbdc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0x9d) != '\0') {
    if (*(char *)(iVar2 + 0x9e) != '\0') {
      FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_0215da48_1);
      return;
    }
    uVar1 = FUN_0214dd50();
    FUN_0214dd6c(uVar1,6);
    FUN_0215dc48(iVar2);
  }
  return;
}

