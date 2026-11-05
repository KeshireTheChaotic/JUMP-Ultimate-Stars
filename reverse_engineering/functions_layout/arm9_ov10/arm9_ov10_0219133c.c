
int FUN_0219133c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_020532e4(&DAT_021a86d4);
  if ((iVar2 == 0) && (DAT_021a852c == 0)) {
    DAT_021a852c = 1;
    FUN_020531dc(&DAT_021a86d4);
  }
  OS_RestoreInterrupts(uVar1);
  return iVar2;
}

