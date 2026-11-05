
/* WARNING: Removing unreachable block (ram,0x02056b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02056b40(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"IO_other":1} io=["04fff200"] */
  iVar1 = FUN_02053a98();
  if (iVar1 == 0) {
    return 1;
  }
  OS_DisableInterrupts(iVar1);
  _DAT_04fff200 = 0x10;
  OS_RestoreInterrupts();
  return 1;
}

