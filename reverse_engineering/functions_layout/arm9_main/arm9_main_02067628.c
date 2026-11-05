
undefined4 FUN_02067628(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02067394();
  if (uVar1 == 1) {
    uVar1 = FUN_02068d74();
  }
  else if (uVar1 < 7) {
    uVar2 = OS_DisableInterrupts();
    uVar1 = FUN_02068cf8();
    FUN_020673a0();
    OS_RestoreInterrupts(uVar2);
  }
  else if (uVar1 < 9) {
    uVar1 = FUN_020680c0();
  }
  else if (uVar1 < 10) {
    uVar1 = FUN_0206867c();
  }
  else if (uVar1 < 0x10) {
    uVar1 = FUN_020690d4();
  }
  else if (uVar1 == 0x11) {
    uVar1 = FUN_02068334();
  }
  FUN_020673a0(uVar1);
  if (uVar1 == 0x10) {
    uVar2 = FUN_02067288();
    FUN_0206731c();
    return uVar2;
  }
  if (uVar1 == 0x12) {
    FUN_0206731c();
    return 0xffffffff;
  }
  return 0;
}

