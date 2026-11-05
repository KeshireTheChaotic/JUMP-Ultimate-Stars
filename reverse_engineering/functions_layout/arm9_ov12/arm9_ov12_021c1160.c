
void FUN_021c1160(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_021c12c4();
  if (iVar2 != 0) {
    FUN_021c1198(DAT_021d5280 + 0xc4,0,param_1,0);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

