
/* JUS-CLASS jus_TagSPDB::jus_TagSPDB [class-type-tag] stores vtable 02095ff4 into *this
   (constructor) */

undefined4 * jus_TagSPDB::jus_TagSPDB(undefined4 *param_1)

{
  jus_Class_02095d50::jus_Class_02095d50();
  *param_1 = &vftable;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x6a) = 0xffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  return param_1;
}

