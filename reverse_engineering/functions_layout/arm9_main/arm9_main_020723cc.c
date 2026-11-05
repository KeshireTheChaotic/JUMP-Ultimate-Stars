
uint FUN_020723cc(int param_1,uint param_2,byte *param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
  if (param_2 <= uVar1) {
    return 0xffffffff;
  }
  *param_3 = *param_3 + 1;
  FUN_02078aa0(param_1 + uVar1 * 0x5c);
  FUN_02078b08(param_1 + uVar1 * 0x5c,&DAT_02092454);
  if (param_4 != 0) {
    FUN_020517fc(param_4 + uVar1 * 0x4c,0);
  }
  DAT_020b02ac = 1;
  return uVar1;
}

