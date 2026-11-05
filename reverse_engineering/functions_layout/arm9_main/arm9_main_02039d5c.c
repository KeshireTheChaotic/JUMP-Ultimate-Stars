
/* JUS-CLASS jus_TagNG18::vfunc_11 [class-virtual] slot 11 of vtable 02096a60 (own slot, not
   inherited) */

undefined1 jus_TagNG18::vfunc_11(int param_1,uint param_2,uint param_3)

{
  return *(undefined1 *)
          (*(int *)(param_1 + 0xc) +
          (param_2 & 7) +
          ((param_3 >> 3) * (uint)(*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3)) * 0x40 +
          (param_3 & 7) * 8);
}

