
void FUN_02053290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = *DAT_020aab6c;
  if (param_1 != 0) {
    *(int *)(iVar2 + 0x78) = param_1;
    FUN_020538f4(param_1,iVar2);
  }
  *(undefined4 *)(iVar2 + 100) = 0;
  FUN_020530c4();
  OS_RestoreInterrupts(uVar1);
  return;
}

