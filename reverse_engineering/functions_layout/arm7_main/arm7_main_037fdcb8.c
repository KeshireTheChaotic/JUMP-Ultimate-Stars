
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OSi_SetTimer [behavioral] programs timer 1 (0xC1) for the next alarm from OS_GetTick,
   registers its callback (timer 1), enables IE bit 4 */

void OSi_SetTimer(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* JUS-TAG hw={"TIMER":2} io=["04000104","04000106"] */
  uVar3 = OS_GetTick();
  _DAT_04000106 = 0;
  uVar2 = *(uint *)(param_1 + 0xc) - (uint)uVar3;
  iVar1 = *(int *)(param_1 + 0x10) -
          ((int)((ulonglong)uVar3 >> 0x20) + (uint)(*(uint *)(param_1 + 0xc) < (uint)uVar3));
  OSi_EnterTimerCallback(1,OSi_AlarmHandler);
  _DAT_04000104 = 0;
  if (iVar1 < 0) {
    _DAT_04000104 = 0xfffe;
  }
  else if (iVar1 < (int)(uint)(uVar2 < 0x10000)) {
    _DAT_04000104 = ~(ushort)uVar2;
  }
  _DAT_04000106 = 0xc1;
  OS_EnableIrqMask(0x10);
  return;
}

