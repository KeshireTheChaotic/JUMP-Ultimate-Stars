
/* JUS-CLASS jus_TagPAL1::vfunc_11 [class-virtual] slot 11 of vtable 02096cf4 (own slot, not
   inherited) */

uint jus_TagPAL1::vfunc_11(int param_1,uint param_2,int param_3)

{
  return (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) +
                             (param_3 * (uint)*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3)) >>
         (7 - (param_2 & 7) & 0xff) & 1;
}

