
/* JUS-CLASS jus_TagNCG2::vfunc_11 [class-virtual] slot 11 of vtable 020969dc (own slot, not
   inherited) */

uint jus_TagNCG2::vfunc_11(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xc) +
                         (param_2 >> 1 & 3) +
                         (((param_3 >> 3) * (uint)*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3)) *
                         0x20 + (param_3 & 7) * 4);
  if ((param_2 & 1) == 0) {
    uVar1 = uVar1 & 0xf;
  }
  else {
    uVar1 = (int)uVar1 >> 4;
  }
  return uVar1;
}

