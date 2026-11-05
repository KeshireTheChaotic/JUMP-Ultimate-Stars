
/* JUS-CLASS jus_TagPAL8::vfunc_09 [class-virtual] slot 9 of vtable 02096e80 (own slot, not
   inherited) */

undefined2 jus_TagPAL8::vfunc_09(int param_1,int param_2,int param_3)

{
  return *(undefined2 *)
          (*(int *)(*(int *)(param_1 + 0x20) + 0x10) +
          (uint)*(byte *)(*(int *)(param_1 + 0xc) +
                         param_3 * (uint)*(ushort *)(param_1 + 8) + param_2) * 2);
}

