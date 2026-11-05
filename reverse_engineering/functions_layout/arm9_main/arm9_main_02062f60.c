
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02062f60(void)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":3,"GBA_SLOT":1}
                       io=["027ffc30","027ffc35","027ffc38","0801fffe"] */
  uVar1 = 1;
  if (_DAT_027ffc30 == -1) {
    return 0;
  }
  if ((DAT_027ffc35 & 3) >> 1 == 1) {
    return 0;
  }
  FUN_02062eb8(DAT_020af50e,auStack_18);
  FUN_02062f2c(auStack_10);
  if ((((DAT_080000b2 == -0x6a) && (_DAT_027ffc30 != _DAT_080000be)) ||
      ((DAT_080000b2 != -0x6a && (_DAT_027ffc30 != _DAT_0801fffe)))) ||
     ((_DAT_027ffc38 != _DAT_080000ac && ((DAT_027ffc35 & 1) != 0)))) {
    DAT_027ffc35 = DAT_027ffc35 | 2;
    uVar1 = 0;
  }
  FUN_02062f00(auStack_10);
  FUN_02062e9c(DAT_020af50e,auStack_18);
  return uVar1;
}

