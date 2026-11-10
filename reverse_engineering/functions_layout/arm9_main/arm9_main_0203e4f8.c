
/* JUS-CLASS jus_HwBgLayerSub::vfunc_34 [class-virtual] slot 34 of vtable 0209aa68 (own slot, not
   inherited) */

void jus_HwBgLayerSub::vfunc_34(int param_1)

{
  *(uint *)(param_1 + 0x960) =
       *(int *)(param_1 + 0x940) *
       (uint)*(ushort *)(param_1 + 0x8c8) * (uint)*(ushort *)(param_1 + 0x8ca);
  DAT_020a0ebc = 2;
  return;
}

