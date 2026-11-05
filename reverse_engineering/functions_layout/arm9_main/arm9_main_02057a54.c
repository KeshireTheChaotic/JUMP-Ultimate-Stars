
undefined2 FUN_02057a54(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_020acae8 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_020acae8 + 4);
    DC_InvalidateRange(iVar3 + 0x86,2);
    uVar2 = *(undefined2 *)(iVar3 + 0x86);
  }
  OS_RestoreInterrupts(uVar1);
  return uVar2;
}

