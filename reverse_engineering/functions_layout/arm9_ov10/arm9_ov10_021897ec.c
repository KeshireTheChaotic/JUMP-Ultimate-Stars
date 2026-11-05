
void FUN_021897ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_02189984(param_1,s_getpidr_021a6554);
  iVar1 = FUN_02005f14();
  FUN_02189984(param_1,&DAT_021a6530);
  uVar2 = FUN_02005f14();
  iVar3 = FUN_021898c4(3,uVar2,0);
  if (iVar3 != -1) {
    iVar4 = FUN_020012d8(DAT_021a7d30,iVar3);
    *(int *)(iVar4 + 8) = iVar1;
    FUN_02189548(iVar3,0 < iVar1,0,0,0);
  }
  return;
}

