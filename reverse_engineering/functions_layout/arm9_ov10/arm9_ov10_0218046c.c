
undefined4 FUN_0218046c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_20;
  undefined4 local_1c;
  
  if (param_3 < 5) {
    return 4;
  }
  FUN_02180dd8();
  iVar1 = FUN_02181898(param_1,local_1c,local_20);
  if (iVar1 == -1) {
    uVar2 = FUN_0217f6f8(param_1,local_1c,local_20);
    iVar3 = FUN_0217f6cc();
    if (iVar3 != 0) {
      return 5;
    }
  }
  else {
    uVar2 = FUN_02181814(param_1,iVar1);
  }
  iVar3 = FUN_02180be8(param_1,uVar2,param_2,param_3,0);
  if (iVar3 < 0) {
    return 4;
  }
  if (iVar1 == -1) {
    FUN_02181920(param_1,uVar2);
  }
  (**(code **)(param_1 + 0x488))(param_1,1,uVar2,*(undefined4 *)(param_1 + 0x494));
  return 0;
}

