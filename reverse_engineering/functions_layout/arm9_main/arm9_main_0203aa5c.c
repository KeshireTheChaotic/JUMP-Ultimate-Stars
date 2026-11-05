
/* JUS-CLASS jus_Class_02094088::vfunc_14 [class-virtual] slot 14 of vtable 02094088 (own slot, not
   inherited) */

void jus_Class_02094088::vfunc_14(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  if ((DAT_020a0ea0 & 1) == 0) {
    FUN_0204583c(&DAT_020a17ac,0x4000,0x20,in_r3,in_r3);
    FUN_0200f2b0(&DAT_020a17ac,FUN_0204597c,&DAT_020a1314);
    DAT_020a0ea0 = DAT_020a0ea0 | 1;
  }
  DAT_020a0ed0 = &DAT_020a17ac;
  if ((DAT_020a0ff8 & 1) == 0) {
    DAT_020a0d6c = &PTR_vfunc_06_020940a0;
    FUN_0200f2b0(&DAT_020a0d6c,vfunc_08,&DAT_020a1320);
    DAT_020a0ff8 = DAT_020a0ff8 | 1;
  }
  puVar1 = &DAT_020a1690 + DAT_020a1034;
  DAT_020a1034 = DAT_020a1034 + 1;
  *puVar1 = &DAT_020a0d6c;
  return;
}

