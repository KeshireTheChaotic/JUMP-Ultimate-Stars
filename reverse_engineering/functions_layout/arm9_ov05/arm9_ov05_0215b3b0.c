
void FUN_0215b3b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (param_2 == -1) {
    FUN_02159778(param_1,0,1);
    FUN_0215b228(param_1,0);
    FUN_0215aebc(param_1,0);
    FUN_0207342c(0x78,5);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4),FUN_0215b468);
  }
  else {
    local_18 = 0xffff8000;
    local_14 = 0xffff8000;
    FUN_0214ce68(*(undefined4 *)(param_1 + param_2 * 4 + 0x14c),&local_14,&local_18);
    *(char *)(param_1 + 0x4db) = (char)param_2;
    *(undefined1 *)(param_1 + 0x4dc) = 0;
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4));
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4),FUN_0215b498);
  }
  return;
}

