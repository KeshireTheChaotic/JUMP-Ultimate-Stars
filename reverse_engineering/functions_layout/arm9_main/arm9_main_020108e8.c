
void FUN_020108e8(void)

{
  undefined4 *puVar1;
  
  DAT_020a0ccc = 0;
  if ((DAT_020a0cac & 1) == 0) {
    jus_Class_02094238::jus_Class_02094238(&DAT_020a0cdc);
    FUN_0200f2b0(&DAT_020a0cdc,jus_Class_02094238::vfunc_02,&DAT_020a1548);
    DAT_020a0cac = DAT_020a0cac | 1;
  }
  puVar1 = &DAT_0209443c + DAT_020a0ccc;
  DAT_020a0ccc = DAT_020a0ccc + 1;
  *puVar1 = &DAT_020a0cdc;
  FUN_02010970(&DAT_020a153c,0x10);
  return;
}

