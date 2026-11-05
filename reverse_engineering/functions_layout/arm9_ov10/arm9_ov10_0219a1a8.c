
void FUN_0219a1a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  for (uVar4 = 0; uVar3 = FUN_020720d8(), uVar4 < uVar3; uVar4 = uVar4 + 1) {
    iVar1 = FUN_02072050(uVar4);
    iVar2 = FUN_020725ac();
    if (((iVar2 != 0) && (iVar2 = FUN_020698cc(iVar1 + 0x40), iVar2 != 0)) &&
       (iVar2 = FUN_020695b8(iVar1 + 0x40,param_1), iVar2 != 0)) {
      FUN_02051890(param_2,iVar1 + 0x40,0xc);
      FUN_02069ba0(iVar1 + 0x40);
      FUN_0208c598();
    }
  }
  return;
}

