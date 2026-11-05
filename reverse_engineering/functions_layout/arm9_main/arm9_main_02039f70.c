
/* JUS-CLASS jus_TagNCG2::vfunc_12 [class-virtual] slot 12 of vtable 020969dc (own slot, not
   inherited) */

void jus_TagNCG2::vfunc_12(int param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (param_2 >> 1 & 3) +
          (((param_3 >> 3) * (uint)*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3)) * 0x20 +
          (param_3 & 7) * 4;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + iVar2);
  if ((param_2 & 1) == 0) {
    param_4 = param_4 | bVar1 & 0xf0;
  }
  else {
    param_4 = bVar1 & 0xf | param_4 << 4;
  }
  *(byte *)(*(int *)(param_1 + 0xc) + iVar2) = param_4;
  return;
}

