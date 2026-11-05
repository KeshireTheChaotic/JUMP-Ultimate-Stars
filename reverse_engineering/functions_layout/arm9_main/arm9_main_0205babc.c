
void FUN_0205babc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < *(int *)(param_1 + 0x24) << 0x1e) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  while (iVar1 != 0) {
    uVar2 = OS_DisableInterrupts();
    FUN_0205bb78(param_1,1);
    OS_RestoreInterrupts(uVar2);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  FUN_02056954(*(undefined4 *)(param_1 + 0x44),0,1 << (*(uint *)(param_1 + 0x40) & 0xff),0);
  return;
}

