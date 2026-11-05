
int FUN_0202c040(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  piVar2 = &local_8;
  iVar1 = *param_1;
  if (iVar1 < 0) {
    local_4 = iVar1 + -0x7ff;
    piVar2 = &local_4;
  }
  else {
    local_8 = iVar1 + 0x7ff;
  }
  return (int)(*piVar2 + ((uint)(*piVar2 >> 0xb) >> 0x14)) >> 0xc;
}

