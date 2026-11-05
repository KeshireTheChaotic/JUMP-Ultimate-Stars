
void FUN_02010088(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  
  if ((DAT_020a1070 & 1) == 0) {
    jus_Class_02095e30::jus_Class_02095e30(&DAT_020a1e84,0,1,in_r3,in_r3);
    FUN_0200f2b0(&DAT_020a1e84,0x200fec5,&DAT_020a150c);
    DAT_020a1070 = DAT_020a1070 | 1;
  }
  puVar1 = &DAT_020a1a24 + DAT_020a1010;
  DAT_020a1010 = DAT_020a1010 + 1;
  *puVar1 = &DAT_020a1e84;
  return;
}

