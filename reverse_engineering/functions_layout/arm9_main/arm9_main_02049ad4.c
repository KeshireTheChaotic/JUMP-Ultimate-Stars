
/* JUS-CLASS jus_Class_0209b5d4::vfunc_24 [class-virtual] slot 24 of vtable 0209b5d4 (own slot, not
   inherited) */

void jus_Class_0209b5d4::vfunc_24
               (int param_1,int param_2,int param_3,ushort param_4,short param_5,byte param_6,
               byte param_7)

{
  *(ushort *)(*(int *)(param_1 + 0xac) + (param_3 * *(int *)(param_1 + 0x6c) + param_2) * 2) =
       param_4 & 0x3ff | param_5 << 0xc | (ushort)param_6 << 10 | (ushort)param_7 << 0xb;
  FUN_020474b0();
  return;
}

