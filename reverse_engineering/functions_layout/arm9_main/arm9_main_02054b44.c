
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02054b44(void)

{
  ushort uVar1;
  uint local_c;
  uint local_8;
  
                    /* JUS-TAG hw={"TIMER":1,"IRQ":1} io=["04000100","04000214"] */
  OS_DisableInterrupts();
  uVar1 = _DAT_04000100;
  local_c = DAT_020aae90;
  local_8 = DAT_020aae94 & 0xffff;
  if (((_DAT_04000214 & 8) != 0) && ((_DAT_04000100 & 0x8000) == 0)) {
    local_c = DAT_020aae90 + 1;
    local_8 = local_8 + (0xfffffffe < DAT_020aae90);
  }
  OS_RestoreInterrupts();
  return CONCAT44(local_8 << 0x10 | local_c >> 0x10,(uint)uVar1 | local_c << 0x10);
}

