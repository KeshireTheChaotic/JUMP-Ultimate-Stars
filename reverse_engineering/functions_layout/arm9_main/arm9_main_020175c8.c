
/* JUS-CLASS jus_TagPAL8::vfunc_16 [class-virtual] slot 16 of vtable 02096e80 (own slot, not
   inherited) */

void jus_TagPAL8::vfunc_16(int param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 0xc);
  iVar2 = 0;
  if ((int)((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(param_1 + 10)) < 1) {
    return;
  }
  for (; iVar2 < (int)((uint)*(ushort *)(param_1 + 8) * (uint)*(ushort *)(param_1 + 10));
      iVar2 = iVar2 + 1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return;
}

