
/* JUS-CLASS jus_TagPAL1::vfunc_12 [class-virtual] slot 12 of vtable 02096cf4 (own slot, not
   inherited) */

void jus_TagPAL1::vfunc_12(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 7 - (param_2 & 7);
  iVar1 = (param_3 * (uint)*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3);
  *(byte *)(*(int *)(param_1 + 0xc) + iVar1) =
       (byte)(param_4 << (uVar2 & 0xff)) |
       (byte)((*(byte *)(*(int *)(param_1 + 0xc) + iVar1) & 1) << (uVar2 & 0xff));
  return;
}

