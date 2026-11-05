
void FUN_0380380c(uint param_1,uint param_2)

{
  int iVar1;
  uint local_8 [2];
  
  iVar1 = *(int *)(DAT_03809c80 + 0x24);
  if (iVar1 == 1) {
    local_8[0] = param_2 | param_1 >> 5 & 8 | (param_1 & 0xff) << 8;
  }
  else if (iVar1 == 2) {
    local_8[0] = param_2 | param_1 & 0xff00 | (param_1 & 0xff) << 0x10;
  }
  else if (iVar1 == 3) {
    local_8[0] = param_2 | param_1 >> 8 & 0xff00 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  }
  FUN_038039f4(local_8,0,iVar1 + 1,&LAB_03803964);
  return;
}

