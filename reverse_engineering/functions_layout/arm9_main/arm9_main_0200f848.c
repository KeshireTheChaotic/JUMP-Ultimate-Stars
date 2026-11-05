
void FUN_0200f848(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if ((DAT_020a0d30 & 1) == 0) {
    jus_Class_02095a6c::jus_Class_02095a6c(&DAT_020a1c90,0,param_3,param_4,param_4);
    FUN_0200f2b0(&DAT_020a1c90,0x200f6d5,&DAT_020a14e8);
    DAT_020a0d30 = DAT_020a0d30 | 1;
  }
  puVar1 = &DAT_020a1a24 + DAT_020a1010;
  DAT_020a1010 = DAT_020a1010 + 1;
  *puVar1 = &DAT_020a1c90;
  return;
}

