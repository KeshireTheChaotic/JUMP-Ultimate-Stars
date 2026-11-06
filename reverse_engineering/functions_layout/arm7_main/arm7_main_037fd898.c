
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OSi_ArrangeTimer [behavioral] the only call of the OSi_AlarmHandler stub */

void OSi_ArrangeTimer(void)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  
                    /* JUS-TAG hw={"TIMER":1} io=["04000106"] */
  _DAT_04000106 = 0;
  OS_DisableIrqMask(0x10);
  _DAT_0380fff8 = _DAT_0380fff8 | 0x10;
  uVar5 = OS_GetTick();
  puVar1 = DAT_03808470;
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  if (DAT_03808470 != (undefined4 *)0x0) {
    bVar4 = (uint)DAT_03808470[4] <= uVar2;
    if (uVar2 == DAT_03808470[4]) {
      bVar4 = (uint)DAT_03808470[3] <= (uint)uVar5;
    }
    if (bVar4) {
      DAT_03808470 = (undefined4 *)DAT_03808470[6];
      if (DAT_03808470 == (undefined4 *)0x0) {
        DAT_03808474 = 0;
      }
      else {
        DAT_03808470[5] = 0;
      }
      pcVar3 = (code *)*puVar1;
      if (puVar1[8] == 0 && puVar1[7] == 0) {
        *puVar1 = 0;
      }
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(puVar1[1]);
      }
      if (puVar1[8] != 0 || puVar1[7] != 0) {
        *puVar1 = pcVar3;
        FUN_037fdb18(puVar1,0,0);
      }
      if (DAT_03808470 != (undefined4 *)0x0) {
        OSi_SetTimer();
      }
    }
    else {
      OSi_SetTimer(DAT_03808470);
    }
  }
  return;
}

