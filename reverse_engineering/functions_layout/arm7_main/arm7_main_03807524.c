
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03807524(void)

{
  undefined2 uVar1;
  byte bVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG hw={"POSTFLG":1,"IRQ":1,"SYSTEM_SHARED":1}
                       io=["027ffc35","04000208","04000300"] */
  if ((DAT_0380ba74 == 0) && (DAT_0380ba74 = 1, (_DAT_04000300 & 1) != 0)) {
    uVar3 = OS_SetIrqMask(0x40000);
    uVar1 = _DAT_04000208;
    _DAT_04000208 = 1;
    while (DAT_0380ba94 != 1) {
      SVC_WaitByLoop(0x100);
    }
    bVar2 = FUN_038071d8(((DAT_0380ba84 & 0x1ffffc0) >> 6) * 0x20 + 0x2000004);
    DAT_027ffc35 = DAT_027ffc35 & 0xfe | bVar2 & 1;
    FUN_03806d04(1);
    _DAT_04000208 = uVar1;
    OS_SetIrqMask(uVar3);
  }
  return;
}

