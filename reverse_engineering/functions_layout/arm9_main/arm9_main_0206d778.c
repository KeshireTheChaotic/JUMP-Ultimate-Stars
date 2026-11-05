
void FUN_0206d778(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_28;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  iVar4 = *(int *)(param_1 + 0x48);
  iVar3 = 0;
  uStack_28 = param_4;
  if (2 < iVar4) {
    iVar4 = 2;
  }
  for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    cVar1 = *(char *)(param_1 + 0x5d);
    FUN_0206d42c(&uStack_28,param_2);
    iVar2 = FUN_0206d3e8(&uStack_28);
    FUN_02029c68(*(undefined4 *)(iVar2 + 4),cVar1 * 0x20 + 0x20923c4,iVar3 << 4,0x10);
  }
  return;
}

