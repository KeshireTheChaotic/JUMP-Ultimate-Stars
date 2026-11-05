
undefined4 FUN_027f6810(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  
  if (param_2 - 1U < 2) {
    param_1 = param_1 - 1;
    param_2 = param_2 + 0xc;
  }
  iVar1 = FUN_03807acc(param_1,400);
  iVar2 = FUN_03807acc(param_1,100);
  iVar3 = FUN_03807acc(param_2 * 0xd + 8,5);
  FUN_03807acc(param_3 + iVar1 + ((param_1 + (param_1 >> 2)) - iVar2) + iVar3,7);
  return extraout_r1;
}

