
void FUN_02152894(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x90) & 1) == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    uStack_10 = param_4;
    FUN_02152964(&local_18,param_1);
    FUN_02152950(&local_14,param_1);
    FUN_0215ee88(iVar1 + 0x3dc,0,
                 (int)(local_14 + 0x4000 + ((uint)(local_14 + 0x4000 >> 0xb) >> 0x14)) >> 0xc,
                 (int)(local_18 + 0x8000 + ((uint)(local_18 + 0x8000 >> 0xb) >> 0x14)) >> 0xc,0x40,
                 (short)*(char *)(iVar1 + 0x46c) * 0x14 + 8);
  }
  return;
}

