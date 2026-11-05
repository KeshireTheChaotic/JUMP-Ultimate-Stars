
/* JUS-CLASS jus_TagNG18::vfunc_12 [class-virtual] slot 12 of vtable 02096a60 (own slot, not
   inherited) */

void jus_TagNG18::vfunc_12(int param_1,uint param_2,uint param_3,undefined1 param_4)

{
  *(undefined1 *)
   (*(int *)(param_1 + 0xc) +
   (param_2 & 7) + ((param_3 >> 3) * (uint)(*(ushort *)(param_1 + 8) >> 3) + (param_2 >> 3)) * 0x40
   + (param_3 & 7) * 8) = param_4;
  return;
}

