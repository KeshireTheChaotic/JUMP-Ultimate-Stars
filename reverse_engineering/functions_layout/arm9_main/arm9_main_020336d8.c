
/* JUS-CLASS jus_TagDUMY::jus_TagDUMY [class-type-tag] stores vtable 02094b0c into *this
   (constructor) */

void jus_TagDUMY::jus_TagDUMY(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = param_2;
  *(undefined1 *)((int)param_1 + 0x1b) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  DAT_020a0fe4 = DAT_020a0fe4 + 1;
  return;
}

