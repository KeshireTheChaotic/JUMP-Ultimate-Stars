
/* JUS-CLASS jus_Class_020948a4::jus_Class_020948a4 [class-default] stores vtable 020948a4 into
   *this (constructor) */

undefined4 * jus_Class_020948a4::jus_Class_020948a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  jus_Class_02094824::jus_Class_02094824();
  *param_1 = &vftable;
  FUN_02041728(param_1 + 0x109);
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  *(undefined1 *)((int)param_1 + 0x432) = 0;
  FUN_02010970(&DAT_020a1778,4);
  puVar1 = (undefined4 *)FUN_02037f84(&DAT_020a1778);
  *puVar1 = 0;
  FUN_02010970(&DAT_020a1784,4);
  puVar1 = (undefined4 *)FUN_02037f84(&DAT_020a1784);
  *puVar1 = 0;
  FUN_02010970(&DAT_020a147c,4);
  return param_1;
}

