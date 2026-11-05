
void FUN_02178230(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((DAT_021a75a4 != 0) && (iVar1 = FUN_02176f90(), iVar1 != 0)) &&
     (iVar1 = FUN_02177558(), iVar1 != 0)) {
    uVar2 = FUN_02177558();
    iVar1 = FUN_02069718(uVar2,param_1);
    if (((iVar1 != 0) && (iVar1 != -1)) &&
       (iVar3 = FUN_02181d98(*(undefined4 *)(DAT_021a75a4 + 4),iVar1), iVar3 != 0)) {
      FUN_02181d48(*(undefined4 *)(DAT_021a75a4 + 4),iVar1);
    }
  }
  FUN_020517fc(param_1,0,0xc);
  return;
}

