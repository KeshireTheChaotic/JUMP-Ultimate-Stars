
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f149c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080a8"] */
  iVar1 = _DAT_0380fff4;
  puVar3 = (undefined2 *)(_DAT_0380fff4 + 0x454);
  *(short *)(_DAT_0380fff4 + 0x456) = *(short *)(_DAT_0380fff4 + 0x456) + 1;
  if (*(short *)(iVar1 + 0x454) == 0) {
    *puVar3 = 1;
    **(undefined2 **)(iVar1 + 0x45c) = 0;
    *(undefined2 *)(*(int *)(iVar1 + 0x45c) + 4) = 0;
    uVar2 = FUN_027e9bd4();
    *(undefined2 *)(*(int *)(iVar1 + 0x45c) + 8) = uVar2;
    _DAT_048080a8 = (ushort)((*(uint *)(iVar1 + 0x45c) & 0x3fff) >> 1) | 0x8000;
  }
  else {
    *(undefined2 *)(*(int *)(iVar1 + 0x45c) + 4) = 0;
  }
  return;
}

