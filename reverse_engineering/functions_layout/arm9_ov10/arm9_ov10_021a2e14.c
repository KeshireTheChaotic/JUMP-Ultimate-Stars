
void FUN_021a2e14(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_021758cc(0,param_2 + 4,param_3,param_4,param_4);
  FUN_02051890(s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 4,uVar1,4);
  uVar4 = 0;
  do {
    if ((((param_3 & 1 << uVar4) != 0) && (uVar2 = thunk_FUN_021766fc(), uVar4 != uVar2)) &&
       ((param_4 != 0 || (iVar3 = FUN_02176654(uVar4), iVar3 != 0)))) {
      FUN_0217ed34(uVar4,uVar1,param_2 + 4);
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  FUN_021758a4(0,uVar1,param_2 + 4);
  return;
}

