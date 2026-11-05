
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1908(int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["048080b4"] */
  iVar1 = _DAT_0380fff4 + 0x42c;
  iVar2 = iVar1 + param_1 * 0x14;
  FUN_037fbc10(0x1000000);
  _DAT_048080b4 = *(undefined2 *)(&DAT_027f8298 + param_1 * 2);
  if (*(short *)(iVar1 + param_1 * 0x14) != 0) {
    if ((*(ushort *)(*(int *)(iVar2 + 0xc) + 0x14) & 0x4000) == 0) {
      *(undefined2 *)(*(int *)(iVar2 + 0xc) + 0xc) = *(undefined2 *)(*(int *)(iVar2 + 8) + 4);
    }
    *(undefined2 *)(*(int *)(iVar2 + 0xc) + 0x2a) = *(undefined2 *)(*(int *)(iVar2 + 8) + 0x22);
  }
  FUN_037fbc4c();
  return;
}

