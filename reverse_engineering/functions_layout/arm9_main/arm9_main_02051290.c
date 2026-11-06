
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK MI_StopDma [behavioral] clears repeat/timing bits, then the enable bit of DMAxCNT_H;
   channel-0 workaround */

void MI_StopDma(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  uVar2 = OS_DisableInterrupts();
  iVar1 = (param_1 * 6 + 5) * 2;
  *(ushort *)(&DAT_040000b0 + iVar1) = *(ushort *)(&DAT_040000b0 + iVar1) & 0xc5ff;
  *(ushort *)(&DAT_040000b0 + iVar1) = *(ushort *)(&DAT_040000b0 + iVar1) & 0x7fff;
  puVar4 = (undefined1 *)(uint)*(ushort *)(&DAT_040000b0 + iVar1);
  uVar3 = (uint)*(ushort *)(&DAT_040000b0 + iVar1);
  if (param_1 == 0) {
    _DAT_040000b0 = 0;
    puVar4 = &DAT_040000b0;
    uVar3 = 0x81400001;
    _DAT_040000b4 = 0;
    _DAT_040000b8 = 0x81400001;
  }
  OS_RestoreInterrupts(uVar2,uVar3,puVar4);
  return;
}

