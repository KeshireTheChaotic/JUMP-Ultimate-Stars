
/* JUS-CLASS jus_TagSPD2::jus_TagSPD2 [class-type-tag] stores vtable 02096068 into *this
   (constructor) */

undefined4 * jus_TagSPD2::jus_TagSPD2(undefined4 *param_1,int param_2)

{
  jus_Class_02095d50::jus_Class_02095d50();
  *param_1 = &vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 100);
  return param_1;
}

