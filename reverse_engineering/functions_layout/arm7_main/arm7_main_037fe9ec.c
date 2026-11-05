
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_037fe9ec(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"IPC_PXI":2} io=["04000184","04000188"] */
  if ((_DAT_04000184 & 0x4000) == 0) {
    OS_DisableInterrupts(_DAT_04000184 & 0x4000);
    if ((_DAT_04000184 & 2) == 0) {
      _DAT_04000188 = param_1 & 0x1f | (param_3 & 1) << 5 | param_2 << 6;
      OS_RestoreInterrupts();
      uVar1 = 0;
    }
    else {
      OS_RestoreInterrupts();
      uVar1 = 0xfffffffe;
    }
  }
  else {
    _DAT_04000184 = _DAT_04000184 | 0xc000;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

