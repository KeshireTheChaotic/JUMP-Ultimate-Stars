
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_020557c8(uint param_1,int param_2,uint param_3)

{
                    /* JUS-TAG hw={"IPC_PXI":2} io=["04000184","04000188"] */
  if ((_DAT_04000184 & 0x4000) != 0) {
    _DAT_04000184 = _DAT_04000184 | 0xc000;
    return 0xffffffff;
  }
  OS_DisableInterrupts(_DAT_04000184 & 0x4000);
  if ((_DAT_04000184 & 2) == 0) {
    _DAT_04000188 = param_1 & 0x1f | (param_3 & 1) << 5 | param_2 << 6;
    OS_RestoreInterrupts();
    return 0;
  }
  OS_RestoreInterrupts();
  return 0xfffffffe;
}

