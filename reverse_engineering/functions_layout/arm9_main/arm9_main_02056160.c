
undefined4 FUN_02056160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  OS_DisableInterrupts();
  if (DAT_020aaf60 != 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  DAT_020aaf60 = 1;
  OS_RestoreInterrupts();
  DAT_020aaf74 = 1;
  DAT_020aaf78 = 0;
  DAT_020aaf64 = param_2;
  DAT_020aaf68 = param_1;
  DAT_020aaf70 = param_3;
  iVar1 = FUN_02056364();
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

