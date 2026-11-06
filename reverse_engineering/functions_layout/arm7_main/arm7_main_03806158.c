
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03806158(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar4 = DAT_0380ba54;
                    /* JUS-TAG hw={"TIMER":1,"SYSTEM_SHARED":2}
                       io=["027fff90","027fff94","0400010e"] */
  uVar1 = DAT_0380ba42;
  if ((DAT_0380ba42 & 4) == 4) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = DAT_0380ba56;
  }
  iVar3 = FUN_03804560();
  if ((iVar3 == 0) && (iVar3 = FUN_038046b8(2), iVar3 != 0)) {
    if ((uVar1 & 1) == 1) {
      uVar2 = jus_Mic_Sample12();
      if ((uVar1 & 2) != 0) {
        uVar2 = uVar2 ^ 0x8000;
      }
    }
    else {
      uVar2 = jus_Mic_Sample8();
      if ((uVar1 & 2) != 0) {
        uVar2 = uVar2 ^ 0x80;
      }
    }
  }
  if ((uVar1 & 1) == 1) {
    _DAT_027fff90 = (ushort *)(DAT_0380ba44 + DAT_0380ba48);
    *_DAT_027fff90 = uVar2;
    DAT_0380ba48 = DAT_0380ba48 + 2;
    DAT_0380ba56 = uVar2;
    _DAT_027fff94 = uVar2;
  }
  else {
    DAT_0380ba56 = uVar2 & 0xff;
    if ((DAT_0380ba48 & 1) == 0) {
      DAT_0380ba48 = DAT_0380ba48 + 1;
      uVar4 = DAT_0380ba56;
    }
    else {
      _DAT_027fff94 = uVar4 | uVar2 << 8;
      _DAT_027fff90 = (ushort *)(DAT_0380ba44 + (DAT_0380ba48 - 1));
      *_DAT_027fff90 = _DAT_027fff94;
      DAT_0380ba48 = DAT_0380ba48 + 1;
    }
  }
  DAT_0380ba54 = uVar4;
  if (DAT_0380ba4c <= DAT_0380ba48) {
    DAT_0380ba48 = 0;
    if ((DAT_0380ba40 & 0x10) == 0x10) {
      FUN_038046d4(0x51,0);
    }
    else {
      iVar3 = FUN_03804588(2,0x42,0);
      if (iVar3 == 0) {
        FUN_038046d4(0x51,4);
      }
      else {
        DAT_0380ba3c = 4;
        _DAT_0400010e = _DAT_0400010e & 0xff7f;
      }
    }
  }
  return;
}

