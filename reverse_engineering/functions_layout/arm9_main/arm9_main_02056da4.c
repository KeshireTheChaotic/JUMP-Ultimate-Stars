
undefined4 FUN_02056da4(void)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  if (DAT_020aafa8 == 0) {
    uVar1 = DAT_020aafa4;
  }
  else {
    uVar1 = DAT_020aafc0;
  }
  OS_RestoreInterrupts();
  return uVar1;
}

