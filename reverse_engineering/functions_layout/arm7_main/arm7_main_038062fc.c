
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038062fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"TIMER":2,"SYSTEM_SHARED":2}
                       io=["027fff90","027fff94","0400010c","0400010e"] */
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0x40) {
    uVar1 = OS_DisableInterrupts();
    iVar2 = FUN_038046b8(2);
    if (iVar2 == 0) {
      OS_RestoreInterrupts(uVar1);
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,4);
    }
    else {
      FUN_038046a0(2);
      OS_RestoreInterrupts(uVar1);
      if ((*(uint *)(param_1 + 8) & 1) == 1) {
        _DAT_027fff94 = FUN_03806910();
        if ((*(uint *)(param_1 + 8) & 2) != 0) {
          _DAT_027fff94 = _DAT_027fff94 ^ 0x8000;
        }
      }
      else {
        _DAT_027fff94 = FUN_038069d8();
        if ((*(uint *)(param_1 + 8) & 2) != 0) {
          _DAT_027fff94 = _DAT_027fff94 ^ 0x80;
        }
      }
      _DAT_027fff90 = &DAT_027fff94;
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,0);
      FUN_0380465c(2);
    }
  }
  else if (iVar2 == 0x41) {
    if (DAT_0380ba3c == 1) {
      DAT_0380ba56 = 0;
      DAT_0380ba54 = 0;
      uVar1 = OS_DisableInterrupts();
      FUN_037fbc4c(0x40);
      FUN_03806cdc(0x40,FUN_038062c0);
      FUN_03806c70();
      _DAT_0400010c = DAT_0380ba50;
      _DAT_0400010e = DAT_0380ba52 | 0xc0;
      OS_RestoreInterrupts(uVar1);
      FUN_038046d4(*(uint *)(param_1 + 4) & 0xffff,0);
      DAT_0380ba3c = 2;
    }
    else {
      FUN_038046d4(0x41,3);
    }
  }
  else if (iVar2 == 0x42) {
    if (DAT_0380ba3c - 3U < 2) {
      _DAT_0400010e = _DAT_0400010e & 0xff7f;
      uVar1 = OS_DisableInterrupts();
      FUN_03806cdc(0x40,0);
      FUN_03806c24();
      OS_RestoreInterrupts(uVar1);
      if (DAT_0380ba3c == 3) {
        FUN_038046d4(0x42,0);
      }
      else {
        FUN_038046d4(0x51,0);
      }
      DAT_0380ba3c = 0;
    }
    else if (DAT_0380ba3c == 3) {
      FUN_038046d4(0x42,3);
    }
    else {
      FUN_038046d4(0x51,3);
    }
  }
  return;
}

