
void FUN_021973ac(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  FUN_02051890();
  if (param_3 == 1) {
    FUN_0219780c(param_1,param_2,param_4);
  }
  else if (param_3 != 0) {
    FUN_02197954(param_1,param_2,param_3,param_4);
  }
  FUN_02197954(param_8,param_1,param_7,param_5);
  iVar1 = (param_4 - param_5) * 2;
  iVar2 = param_5 * 2;
  FUN_020517fc(param_8 + iVar2,0,iVar1);
  FUN_02197954(param_9,param_8,param_6,param_4);
  FUN_02197b70(param_1,param_1,param_9,param_4);
  FUN_02002450(param_1,param_1 + iVar2,iVar1);
  FUN_020517fc(param_1 + param_4 * 2 + param_5 * -2,0,iVar2);
  iVar1 = FUN_021979e8(param_1,param_6,param_4);
  if (iVar1 == 0) {
    FUN_020517fc(param_1,0,param_4 << 1);
    return;
  }
  if (iVar1 == 1) {
    FUN_02197a80(param_1,param_1,param_6,param_4);
    return;
  }
  return;
}

