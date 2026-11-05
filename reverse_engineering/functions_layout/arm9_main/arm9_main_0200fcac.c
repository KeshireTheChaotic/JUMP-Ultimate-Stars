
void FUN_0200fcac(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  if ((DAT_020a0de8 & 1) == 0) {
    jus_Class_02095ea0::jus_Class_02095ea0(&DAT_020a1dac,0,1,1,in_r3);
    FUN_0200f2b0(&DAT_020a1dac,0x200fad9,&DAT_020a1590);
    DAT_020a0de8 = DAT_020a0de8 | 1;
  }
  puVar1 = &DAT_020a1a24 + DAT_020a1010;
  DAT_020a1010 = DAT_020a1010 + 1;
  *puVar1 = &DAT_020a1dac;
  return;
}

