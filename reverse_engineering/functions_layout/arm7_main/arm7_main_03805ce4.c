
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_03805ce4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 unaff_r6;
  undefined4 uVar6;
  bool bVar7;
  
                    /* JUS-TAG hw={"IRQ":1,"KEYPAD":2} io=["04000132","04000134","04000208"] */
  uVar2 = _DAT_04000208;
  _DAT_04000208 = 0;
  uVar3 = OS_DisableInterrupts();
  uVar4 = OS_DisableIrqMask(0x1ffffff);
  uVar5 = FUN_03805a34(0);
  FUN_03805edc(2);
  FUN_03805b50(2);
  FUN_03805b50(2);
  FUN_037fedb8();
  FUN_038059e4(1);
  if ((DAT_0380aa70 & 1) != 0) {
    _DAT_04000132 = DAT_0380aa6c | 0x4000;
    OS_EnableIrqMask(0x1000);
  }
  if ((DAT_0380aa70 & 4) != 0) {
    OS_EnableIrqMask(0x400000);
  }
  uVar1 = _DAT_04000134;
  bVar7 = (DAT_0380aa70 & 2) != 0;
  if (bVar7) {
    FUN_037fec00(0x8000);
    FUN_037fec1c(0x40,0);
    FUN_037fec1c(0x100,0x100);
    OS_EnableIrqMask(0x80);
    unaff_r6 = uVar1;
  }
  if ((DAT_0380aa70 & 8) != 0) {
    OS_EnableIrqMask(0x100000);
  }
  if ((DAT_0380aa70 & 0x10) != 0) {
    OS_EnableIrqMask(0x2000);
  }
  OS_RestoreInterrupts(uVar3);
  _DAT_04000208 = 1;
  SVC_Sleep();
  FUN_03805ac4(0,uVar5);
  if ((DAT_0380aa70 & 0x20) == 0) {
    uVar5 = 7;
  }
  else {
    uVar5 = 6;
  }
  if ((DAT_0380aa70 & 0x40) == 0) {
    uVar6 = 5;
  }
  else {
    uVar6 = 4;
  }
  FUN_03805bb8(uVar5);
  FUN_03805bb8(uVar6);
  if (bVar7) {
    _DAT_04000134 = unaff_r6;
  }
  FUN_03805a10(1);
  FUN_037fed64();
  DAT_0380aa98 = 0;
  FUN_03805988(0x62,0,0);
  OS_DisableInterrupts();
  OS_SetIrqMask(uVar4);
  OS_RestoreInterrupts(uVar3);
  uVar1 = _DAT_04000208;
  _DAT_04000208 = uVar2;
  return uVar1;
}

