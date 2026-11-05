
/* JUS-CLASS jus_TagPL4R::vfunc_11 [class-virtual] slot 11 of vtable 02096d78 (own slot, not
   inherited) */

uint jus_TagPL4R::vfunc_11(int param_1,uint param_2,int param_3)

{
  if ((param_2 & 1) == 0) {
    return *(byte *)(*(int *)(param_1 + 0xc) +
                    (param_3 * (uint)*(ushort *)(param_1 + 8) >> 1) + (param_2 >> 1)) & 0xf;
  }
  return (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) +
                             (param_3 * (uint)*(ushort *)(param_1 + 8) >> 1) + (param_2 >> 1)) >> 4;
}

