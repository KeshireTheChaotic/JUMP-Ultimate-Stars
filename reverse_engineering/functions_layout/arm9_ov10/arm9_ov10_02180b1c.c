
undefined4 FUN_02180b1c(undefined4 param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 local_20 [2];
  undefined4 local_1c [2];
  
  if (param_3 < 1) {
    return 0;
  }
  uVar1 = (uint)*param_2;
  iVar2 = FUN_02180f1c();
  if (param_3 < iVar2) {
    return 0;
  }
  if (((uVar1 & 0x40) != 0) &&
     (iVar3 = FUN_02180e28(param_1,param_2 + iVar2,param_3 - iVar2), iVar3 == 0)) {
    return 0;
  }
  uVar1 = uVar1 & 0x80;
  if ((uVar1 != 0) && (iVar2 = FUN_02180ecc(param_2 + iVar2,param_3 - iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = FUN_020024cc(param_2 + 1,&DAT_021a4d0c,4);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  FUN_02180dd8(param_1,param_2,param_3,local_1c,local_20,uVar1);
  uVar4 = FUN_0217f6f8(param_1,local_1c[0],local_20[0]);
  iVar2 = FUN_0217f6cc();
  if (iVar2 == 0) {
    uVar5 = FUN_02180be8(param_1,uVar4,param_2,param_3,1);
    FUN_02181920(param_1,uVar4);
    return uVar5;
  }
  return 0xfffffffe;
}

