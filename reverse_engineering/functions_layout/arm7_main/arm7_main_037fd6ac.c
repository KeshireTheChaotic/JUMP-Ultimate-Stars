
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_GetTick [behavioral] interrupts off: timer-0 count + 64-bit counter, +1 if the timer-0
   IRQ (IF bit 3) is pending and the count has not wrapped; returns (counter << 16) | count */

undefined8 OS_GetTick(void)

{
  ushort uVar1;
  uint local_c;
  uint local_8;
  
                    /* JUS-TAG hw={"TIMER":1,"IRQ":1} io=["04000100","04000214"] */
  OS_DisableInterrupts();
  uVar1 = _DAT_04000100;
  local_c = DAT_03808464;
  local_8 = DAT_03808468 & 0xffff;
  if (((_DAT_04000214 & 8) != 0) && ((_DAT_04000100 & 0x8000) == 0)) {
    local_c = DAT_03808464 + 1;
    local_8 = local_8 + (0xfffffffe < DAT_03808464);
  }
  OS_RestoreInterrupts();
  return CONCAT44(local_8 << 0x10 | local_c >> 0x10,(uint)uVar1 | local_c << 0x10);
}

