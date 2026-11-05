
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03806e50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
                    /* JUS-TAG hw={"GBA_SLOT":4,"SYSTEM_SHARED":3}
                       io=["027ffc30","027ffc35","027ffc38","080000ac","080000b2","080000be","0801fffe"]
                        */
  uVar2 = 1;
  if (_DAT_027ffc30 == -1) {
    uVar2 = 0;
  }
  else if ((DAT_027ffc35 & 3) >> 1 == 1) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_03806d74(DAT_0380ba6a,auStack_18);
    if (iVar1 == 0) {
      OS_RestoreInterrupts(local_14);
      uVar2 = 1;
    }
    else {
      FUN_03806e08(auStack_10);
      if ((((DAT_080000b2 == -0x6a) && (_DAT_027ffc30 != _DAT_080000be)) ||
          ((DAT_080000b2 != -0x6a && (_DAT_027ffc30 != _DAT_0801fffe)))) ||
         ((_DAT_027ffc38 != _DAT_080000ac && ((DAT_027ffc35 & 1) != 0)))) {
        DAT_027ffc35 = DAT_027ffc35 | 2;
        uVar2 = 0;
      }
      FUN_03806dd4(auStack_10);
      FUN_03806d4c(DAT_0380ba6a,auStack_18);
    }
  }
  return uVar2;
}

