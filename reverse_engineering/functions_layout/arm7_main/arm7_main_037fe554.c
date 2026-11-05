
void FUN_037fe554(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  uVar2 = OS_DisableInterrupts();
  iVar1 = (param_1 * 6 + 5) * 2;
  *(ushort *)(iVar1 + 0x40000b0) = *(ushort *)(iVar1 + 0x40000b0) & 0xcdff;
  *(ushort *)(iVar1 + 0x40000b0) = *(ushort *)(iVar1 + 0x40000b0) & 0x7fff;
  uVar4 = *(undefined2 *)(iVar1 + 0x40000b0);
  uVar3 = (uint)*(ushort *)(iVar1 + 0x40000b0);
  if (param_1 == 0) {
    uVar4 = 0;
    uRam040000b0 = 0;
    uRam040000b4 = 0;
    uVar3 = 0x81400001;
    uRam040000b8 = 0x81400001;
  }
  OS_RestoreInterrupts(uVar2,uVar3,uVar4);
  return;
}

